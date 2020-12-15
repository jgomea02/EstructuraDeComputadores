#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void invierte(char *cadenaOrigen, char *cadenaDestino);

int main()
{

    char *cadenaOrigen;
    char *cadenaDestino;

    cadenaOrigen = (char *)malloc(sizeof(char) * 100);
    cadenaDestino = (char *)malloc(sizeof(char) * 100);

    printf("Escriba su cadena: \n");
    fgets(cadenaOrigen, 100, stdin);

    invierte(cadenaOrigen, cadenaDestino);

    printf("El contenido de su cadena invertido es:");
    for (int i = 0; i < 100; i++)
    {
        printf("%c", *(cadenaDestino + i));
    }
    printf("\n");

    return 0;
}
void invierte(char *cadenaOrigen, char *cadenaDestino)
{
    int i = 99;
    int j = 0;
    while (i >= 0 && j < 100)
    {
        *(cadenaDestino + j) = *(cadenaOrigen + i);
        j++;
        i--; 
    }
}