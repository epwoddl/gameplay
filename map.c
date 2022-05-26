//초급 3- 31x15 중급 4- 41x19 고급 5- 51x23 (벽포함) //가로- 10x+1 세로- 4x+3
#include "gameplay.h"

void map(int x, int map_array[][23])
{
    int ix, iy, i;

    if (x == 3)
    {
        for (ix = 0; ix < 31; ix++)
        {
            for (iy = 0; iy < 15; iy++)
            {
                if (iy == 0)
                    map_array[ix][iy] = 1;

                if (ix == 0)
                    map_array[ix][iy] = 1;

                if (ix == 30)
                    map_array[ix][iy] = 1;

                if (iy == 14)
                    map_array[ix][iy] = 1;
            }
        }
    }

    else if (x == 4)
    {
        for (i = 0; i <= 40; i++)
            printf("*");

        printf("\n");

        for (i = 0; i <= 16; i++)
            printf("*                                       *\n");

        for (i = 0; i <= 40; i++)
            printf("*");
    }
    else if (x == 5)
    {
        for (i = 0; i <= 50; i++)
            printf("*");

        printf("\n");

        for (i = 0; i <= 20; i++)
            printf("*                                                 *\n");

        for (i = 0; i <= 50; i++)
            printf("*");
    }

    for (ix = 0; ix < 51; ix++)
    {
        for (iy = 0; iy < 23; iy++)
        {
            if (map_array[ix][iy] == 1)
            {
                gotoxy(ix, iy);
                printf("*");
            }
        }
    }
}