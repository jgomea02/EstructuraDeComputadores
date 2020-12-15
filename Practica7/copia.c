#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char compara[100]="compara";
    char anadida[100]="anadida";
    int longitud;

    printf("Escriba su cadena:\n");
    fgets(cadena,100,stdin);
    longitud = strlen(cadena);
    printf("La longitud de la cadena es: %d\n",longitud);

    if(strcmp(cadena, compara)==0){
        printf("Las cadena son iguales\n");
    }else{
        printf("Las cadenas son distintas\n");
    }

    strcat(cadena,anadida);
    printf("Ahora la cadena es: %s\n", cadena);

    return 0;
}