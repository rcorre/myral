#!/bin/python2

import fnmatch
import sys
from clang import cindex

PACKAGE = 'al'
STRIP_PREFIX = ['al_', 'ALLEGRO_', '_ALLEGRO']
INCLUDE_HEADER = '*/allegro5/*'
EXCLUDE_HEADER = '*/allegro5/inline/*'
EXCLUDE_NAME = '_*'
C_HEADERS = ['allegro5/allegro.h']

enums = set()

def myr_type(node):
    pointee = node.get_pointee()
    if pointee.kind != cindex.TypeKind.INVALID:
        return myr_type(pointee) + " #"
    if node.kind == cindex.TypeKind.UCHAR:
        return 'byte'
    if node.kind == cindex.TypeKind.UINT:
        return 'uint'
    if node.kind == cindex.TypeKind.INCOMPLETEARRAY:
        return myr_type(node.element_type) + '[:]'

    return nameof(node).replace('const', '').replace('struct ', '')

def nameof(node):
    name = node.spelling

    for prefix in STRIP_PREFIX:
        if name.startswith(prefix):
            name = name[len(prefix):]
    return name

# TODO: you can reuse arg names?
def myr_arg(a, i):
    name = a.spelling or 'arg{}'.format(i)

    result = a.type.get_pointee().get_result()
    if result.spelling:
        # is a function pointer
        args = ', '.join(myr_arg(a, i)
                         for i, a in enumerate(a.get_children()))
        return '{}: ({} -> {})'.format(name, args, myr_type(result))
    return '{}: {}'.format(name, myr_type(a.type))

def myr_func(node):
    args = ', '.join(myr_arg(a, i) for i, a in enumerate(node.get_arguments()))
    ret = myr_type(node.result_type)
    return 'extern const {} : ({} -> {})'.format(nameof(node), args, ret)

def myr_enum(node):
    if not node.spelling:
        return '\n'.join('const {} = {}'.format(nameof(c), c.enum_value)
                         for c in node.get_children())
    fields = '\n'.join('\t`{}'.format(nameof(c))
                       for c in node.get_children())
    return 'type {} = union\n{}\n;;'.format(nameof(node), fields)

def myr_union(node):
    fields = '\n'.join('\t`{} {}'.format(nameof(c), nameof(c.type))
                       for c in node.get_children())
    return 'type {} = union\n{}\n;;'.format(nameof(node), fields)

def myr_struct(node):
    return 'type {} = struct\n;;'.format(nameof(node))

def myr_typedef_func(node):
    ret = myr_type(node.underlying_typedef_type.get_pointee().get_result())
    if not ret:
        ret = myr_type(node.underlying_typedef_type.get_result())
    args = ', '.join(myr_arg(a, i)
                     for i, a in enumerate(node.get_children())
                     if a.kind == cindex.CursorKind.PARM_DECL)
    return 'type {} = ({} -> {})'.format(nameof(node), args, ret)

def myr_typedef(node):
    typ = node.underlying_typedef_type
    if typ.get_pointee().get_result().kind != cindex.TypeKind.INVALID:
        return myr_typedef_func(node)
    return 'type {} = {}'.format(nameof(node), myr_type(typ))

def myr_var(node):
    return 'var {} : {}'.format(nameof(node), myr_type(node.type))

def glue_arg(a, i):
    name = a.spelling or 'arg{}'.format(i)

    result = a.type.get_pointee().get_result().spelling
    if result:
        # is a function pointer
        args = ', '.join(glue_arg(a, i)
                         for i, a in enumerate(a.get_children()))
        return '{} (*{})({})'.format(result, name, args)

    el_type = a.type.get_array_element_type().spelling
    if el_type:
        # is an array
        return '{} {}[]'.format(el_type, name)

    return '{} {}'.format(a.type.spelling, name)

def glue_func(node):
    ret = node.result_type.spelling
    args = ', '.join(glue_arg(a, i)
                     for i, a in enumerate(node.get_arguments()))
    argnames = ', '.join(a.spelling or 'arg{}'.format(i)
                         for i, a in enumerate(node.get_arguments()))
    return '\n'.join(['{} {}${}({})'.format(ret, PACKAGE, nameof(node), args),
                      '{',
                      '\treturn {}({});'.format(node.spelling, argnames),
                      '}'])

def myr_code(node):
    name = node.spelling
    kind = node.kind
    if kind == cindex.CursorKind.FUNCTION_DECL:
        return myr_func(node)
    elif kind == cindex.CursorKind.ENUM_DECL:
        enums.add(name)
        return myr_enum(node)
    elif kind == cindex.CursorKind.UNION_DECL:
        return myr_union(node)
    elif kind == cindex.CursorKind.TYPEDEF_DECL:
        if name in enums:
            return
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
