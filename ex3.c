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
    //allegro_init();
    install_allegro(SYSTEM_NONE, &errno, NULL);
    set_color_depth(32);

    BITMAP *bmp= create_bitmap(100, 100);
    if(!bmp)
    {
        printf("BITMAP nao criado\n");
        return;
    }
    circlefill(bmp, 50, 50, 20, makecol(0, 255, 0));
    
    save_bmp("ex3.bmp", bmp, NULL);
    destroy_bitmap(bmp);
    allegro_exit();
    return;
}
