#include <stdio.h>
int main (){
    float Km, Millas, Yardas, Pies;

    printf("Escribe un número de kilómetros: ");
    
    scanf("%f", &Km);

    Millas = Km / 1.60;

    Pies = Km * 100000/ 30.48;

    Yardas = Km * 100000 / 91.44;

    printf("Las millas son: ");
    printf("%f", Millas);

    printf("\nLos pies son: ");
    printf("%f", Pies);

    printf("\nLas yardas son: ");
    printf("%f", Yardas);

    printf("\nFin del algoritmo\n");

    return 0;
}

