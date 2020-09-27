#include <allegro.h>
#include <stdio.h>	
#include <errno.h>

void init();

int main()
{
    init();
 
    return 0;
}
END_OF_MAIN()

void init()
{
    install_allegro(SYSTEM_NONE, & errno, NULL);

    BITMAP *bmp= create_bitmap(400, 400);
    if(!bmp)
    {
        printf("BITMAP nao criado\n");
        return;
    }
    clear_bitmap(bmp);

    set_color_depth(32);
    circlefill(bmp, 200, 200, 100, makecol(0, 255, 0));
    
    save_bmp("ex3.bmp", bmp, NULL);
    destroy_bitmap(bmp);
    allegro_exit();
    return;
}
