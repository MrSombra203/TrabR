#include <stdio.h>

int maze[5][5] = {
    {0,1,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,0},
    {0,1,0,1,0},
    {1,0,0,1,0}
};

void ImprimirLab (int Posx, int Posy){


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (Posx == j && Posy == i)
            {
                printf("x ");
            }
            else{
                printf("%d ", maze[i][j]);
            }
        }
        printf("\n");
    }
    
}