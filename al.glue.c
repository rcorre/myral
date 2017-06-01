/* LIBS: c allegro */
#include <allegro5/allegro.h>

int al$init()
{
    return al_init();
}


ALLEGRO_DISPLAY* al$create_display(int w, int h)
{
    return al_create_display(w, h);
}
