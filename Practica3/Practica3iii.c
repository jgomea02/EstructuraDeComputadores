#include <stdio.h>

int main() {
    int Num;

    printf("Escribe tu nota numérica: ");
    scanf("%d", &Num);

    switch(Num){
        case 5:
        case 6: printf("Aprobado\n");
        break;
        case 7:
        case 8: printf("Notable\n");
        break;
        case 9:
        case 10: printf("Sobresaliente\n");
        break;
        default: printf("Supenso\n");
    }
    printf("Fin del algoritmo\n");
    return 0;
}
