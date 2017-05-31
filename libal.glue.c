/*
 * Any single line C89 style comment in the form below will be used to
 * direct the compilation of a .glue.c file in Myrddin.
 */

/* LIBS: c allegro */
#include <allegro5/allegro.h>

/*
 * We're putting this code into package 'libc'.
 *
 * Myrddin's namespacing uses a '$' to separate
 * the package from the function name, so we
 * name the functions we're binding
 *
 *      pkg$funcname
 *
 * The package and function name don't have to
 * match up with C code.
 */

int al$al_init()
{
    return al_init();
}
