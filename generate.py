#!/bin/python2

import fnmatch
import sys
from clang import cindex

PACKAGE = 'al'
STRIP_PREFIX = ['al_', 'ALLEGRO_']
INCLUDE_HEADER = '*/allegro5/*'
EXCLUDE_HEADER = '*/allegro5/inline/*'
EXCLUDE_NAME = '_*'
C_HEADERS = ['allegro5/allegro.h']

def nameof(node):
    name = node.spelling.replace('*', '#')

    for prefix in STRIP_PREFIX:
        if name.startswith(prefix):
            name = name[len(prefix):]
    return name

def myr_func(node):
    args = ', '.join('{}: {}'.format(a.spelling, nameof(a.type))
                     for a in node.get_arguments())
    ret = nameof(node.result_type)
    return 'extern const {} : ({} -> {})'.format(nameof(node), args, ret)

def myr_enum(node):
    fields = '\n'.join('\t`{}'.format(nameof(c))
                       for c in node.get_children())
    return 'type {} = union\n{}\n;;'.format(nameof(node), fields)

def myr_union(node):
    fields = '\n'.join('\t`{} {}'.format(nameof(c), nameof(c.type))
                       for c in node.get_children())
    return 'type {} = union\n{}\n;;'.format(nameof(node), fields)

def myr_struct(node):
    return 'type {} = struct\n;;'.format(nameof(node))

def myr_typedef(node):
    typ = node.underlying_typedef_type
    return 'type {} = {};;'.format(nameof(node), nameof(typ))

def myr_var(node):
    return 'var {} : {}'.format(nameof(node), nameof(node.type))

def glue_func(node):
    ret = node.result_type.spelling
    args = ', '.join('{} {}'.format(a.type.spelling,
                                    a.spelling or 'arg{}'.format(i))
                     for i, a in enumerate(node.get_arguments()))
    argnames = ', '.join(a.spelling or 'arg{}'.format(i)
                         for i, a in enumerate(node.get_arguments()))
    return '\n'.join(['{} {}${}({})'.format(ret, PACKAGE, nameof(node), args),
                      '{',
                      '\treturn {}({});'.format(node.spelling, argnames),
                      '}'])

def myr_code(node):
    kind = node.kind
    if kind == cindex.CursorKind.FUNCTION_DECL:
        return myr_func(node)
    elif kind == cindex.CursorKind.ENUM_DECL:
        return myr_enum(node)
    elif kind == cindex.CursorKind.UNION_DECL:
        return myr_union(node)
    elif kind == cindex.CursorKind.TYPEDEF_DECL:
        typ = node.underlying_typedef_type
        if typ.kind == cindex.TypeKind.ELABORATED:
            return myr_struct(node)
        return myr_typedef(node)
    elif kind == cindex.CursorKind.STRUCT_DECL:
        # only include typedef'd structs for now...
        return None
    elif kind == cindex.CursorKind.VAR_DECL:
        return myr_var(node)
    else:
        sys.stderr.write('ignored {} {}\n'.format(node.kind, node.spelling))
    return None

def glue_code(node):
    if node.kind == cindex.CursorKind.FUNCTION_DECL:
        return glue_func(node)
    return None

index = cindex.Index.create()
tu = index.parse(sys.argv[1])
with open('allegro.myr', 'w') as myr_file, open('al.glue.c', 'w') as glue_file:
    for header in C_HEADERS:
        glue_file.write('#include "{}"\n'.format(header))
    for child in tu.cursor.get_children():
        header = child.location.file.name
        if not fnmatch.fnmatch(header, INCLUDE_HEADER):
            continue
        if fnmatch.fnmatch(header, EXCLUDE_HEADER):
            continue
        if fnmatch.fnmatch(child.spelling, EXCLUDE_NAME):
            continue
        myr = myr_code(child)
        glue = glue_code(child)
        if myr:
            myr_file.write(myr)
            myr_file.write('\n')
        if glue:
            glue_file.write(glue)
            glue_file.write('\n')
