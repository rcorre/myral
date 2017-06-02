#!/bin/python2

import sys
from clang import cindex

def walk(node, indent=1):
    kind = node.kind
    if kind == cindex.CursorKind.TRANSLATION_UNIT:
        for c in node.get_children():
            walk(c, indent+1)
    elif kind == cindex.CursorKind.FUNCTION_DECL:
        name = node.spelling
        args = ','.join('{}: {}'.format(a.spelling, a.type.spelling)
                        for a in node.get_arguments())
        # TODO -- seriously, how do I get the return type?
        ret = node.type.spelling.split(' ')[0]
        print 'extern const {} : ({} -> {})'.format(name, args, ret)
    elif kind == cindex.CursorKind.ENUM_DECL:
        print 'type {} = union'.format(node.spelling)
        for c in node.get_children():
            print '`{}'.format(c.spelling)
        print ';;'
    elif kind == cindex.CursorKind.UNION_DECL:
        print 'type {} = union'.format(node.spelling)
        for c in node.get_children():
            print '`{} {}'.format(c.spelling, c.type.spelling)
        print ';;'
    elif kind in [cindex.CursorKind.TYPEDEF_DECL, cindex.CursorKind.STRUCT_DECL]:
        # check cindex.CursorKind.STRUCT_DECL:
        print 'type {} = struct\n;;'.format(node.spelling)
    elif kind == cindex.CursorKind.VAR_DECL:
        print 'var {} : {}'.format(node.spelling, node.type.spelling)
    else:
        print 'unknown', node.kind, node.spelling

index = cindex.Index.create()
tu = index.parse(sys.argv[1])
walk(tu.cursor)
