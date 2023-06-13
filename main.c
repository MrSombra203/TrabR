#include <stdio.h>
#include "player.h"

int main(){
    int opcion, fin=0;
    do
    {
    printf("Bienbenido al laberito.\n Escoja una de las ociones:\n 1)Jugar\n 2)Creditos\n 3)Salir\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        printf("Empecemos");
        Juego();
        break;

    case 2:
        printf("Creado por José Miguel Vásconez. (A00096279)\n");
        break;

    case 3:
        printf("Gracias por jugar. <3");
        fin= fin +1;
        break;

    default:
        printf("Escoja una de las opciones.\n");
        break;
    }
    } while (opcion != 3);
    return 0;
}