#include <stdio.h>

int maze[5][5] = {
    {0,1,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,0},
    {0,1,0,1,0},
    {1,0,0,1,0}
};

void Juego (){
    int Posx = 0, Posy = 0;
    int PosxVal=0, PosyVal=0;
    char movimiento=0;
    int movimientos;
    do
    {
        printf("Escoja el movimiento que quiere hacer:\n w=Arreba\n a=Izquierda\n s=Abajo\n d=Derecha\n");
        scanf("%c", &movimiento);
        switch (movimiento)
        {
        case 'w':
            PosyVal= Posy - 1;
            if (Posy<0 && Posy>4 && maze[Posy][Posy] == 1)
            {
                printf("No se pude ir para sea ubicasion.");
            }
            else{
            Posy= PosyVal;
            ImprimirLab (Posx, Posy);}
            break;
        
        case 'a':
            PosxVal = Posx - 1;
            if (Posx<0 && Posx>4 && maze[Posy][Posy] == 1)
            {
                printf("No se pude ir para sea ubicasion.");
            }
            else{
            Posx = PosxVal;
            ImprimirLab (Posx, Posy);}
            break;
        
        case 's':
            PosyVal = Posy + 1;
            if (Posy<0 && Posy>4 && maze[Posy][Posy] == 1)
            {
                printf("No se pude ir para sea ubicasion.");
            }
            else{
            Posy = PosyVal;
            ImprimirLab (Posx, Posy);}
            break;
        
        case 'd':
            PosxVal = Posx + 1;
            if (Posx<0 && Posx>4 && maze[Posy][Posy] == 1)
            {
                printf("No se pude ir para sea ubicasion.");
            }
            else{
            Posx = PosxVal;
            ImprimirLab (Posx, Posy);}
            break;

        
        default:
            printf("Ponga unos de los comandos puesto en la primera opcion.\n");
            movimiento--;
            break;
        }

        movimiento++;
    } while (Posx != 4 && Posy != 4);
    printf("fin del juego, usted ah echo %d moviemntos.", movimiento);
}