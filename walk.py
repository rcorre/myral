#!/bin/python2

import fnmatch
import sys
from clang import cindex

PREFIX = 'al'
INCLUDE_FILTER = '*/allegro5/*'

def myr_func(node):
    name = node.spelling
    args = ', '.join('{}: {}'.format(a.spelling, a.type.spelling)
                     for a in node.get_arguments())
    ret = node.result_type.spelling
    return 'extern const {} : ({} -> {})'.format(name, args, ret)

def myr_enum(node):
    fields = '\n'.join('\t`{}'.format(c.spelling) for c in node.get_children())
    return 'type {} = union\n{}\n;;'.format(node.spelling, fields)

def myr_union(node):
    fields = '\n'.join('\t`{} {}'.format(c.spelling, c.type.spelling)
                       for c in node.get_children())
    return 'type {} = union\n{}\n;;'.format(node.spelling, fields)

def myr_struct(node):
    return 'type {} = struct\n;;'.format(node.spelling)

def myr_typedef(node):
    typ = node.underlying_typedef_type
    return 'type {} = {};;'.format(node.spelling, typ.spelling)

def myr_var(node):
    return 'var {} : {}'.format(node.spelling, node.type.spelling)

def glue_func(node):
    name = node.spelling
    ret = node.result_type.spelling
    args = ', '.join('{} {}'.format(a.type.spelling, a.spelling)
                     for a in node.get_arguments())
    argnames = ', '.join(a.spelling for a in node.get_arguments())
    return '\n'.join(['{} {}${}({})'.format(ret, PREFIX, name, args),
                      '{',
                      '\treturn {}({})'.format(name, argnames),
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
with open('test.myr', 'w') as myr_file, open('test.glue.c', 'w') as glue_file:
    for child in tu.cursor.get_children():
        if not fnmatch.fnmatch(child.location.file.name, INCLUDE_FILTER):
            continue
        myr = myr_code(child)
        glue = glue_code(child)
        if myr:
            myr_file.write(myr)
            myr_file.write('\n')
        if glue:
            glue_file.write(glue)
            glue_file.write('\n')
