#!/bin/python2

import sys
from clang import cindex

def walk(node):
    kind = node.kind
    if kind == cindex.CursorKind.TRANSLATION_UNIT:
        for c in node.get_children():
            walk(c)
    elif kind == cindex.CursorKind.FUNCTION_DECL:
        name = node.spelling
        args = ','.join('{}: {}'.format(a.spelling, a.type.spelling)
                        for a in node.get_arguments())
        ret = node.result_type.spelling
        print 'extern const {} : ({} -> {})'.format(name, args, ret)
    elif kind == cindex.CursorKind.ENUM_DECL:
        print 'type {} = union'.format(node.spelling)
        for c in node.get_children():
            print '\t`{}'.format(c.spelling)
        print ';;'
    elif kind == cindex.CursorKind.UNION_DECL:
        print 'type {} = union'.format(node.spelling)
        for c in node.get_children():
            print '\t`{} {}'.format(c.spelling, c.type.spelling)
        print ';;'
    elif kind == cindex.CursorKind.TYPEDEF_DECL:
        typ = node.underlying_typedef_type
        if typ.kind == cindex.TypeKind.ELABORATED:
            print 'type {} = struct\n;;'.format(node.spelling)
        else:
            print 'type {} = {};;'.format(node.spelling, typ.spelling)
    elif kind == cindex.CursorKind.STRUCT_DECL:
        if node.spelling:
            print 'type {} = struct\n;;'.format(node.spelling)
    elif kind == cindex.CursorKind.VAR_DECL:
        print 'var {} : {}'.format(node.spelling, node.type.spelling)
    else:
        print 'unknown', node.kind, node.spelling

index = cindex.Index.create()
tu = index.parse(sys.argv[1])
walk(tu.cursor)
