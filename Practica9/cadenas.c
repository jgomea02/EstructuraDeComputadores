#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]) {
    char cadena[101];
    char anadida[101]="Cadena añadida";
    int longitud;


    printf("Escriba una cadena: \n");
    fgets(cadena,101,stdin);
      
    longitud = strlen(cadena);
    printf("La longitud de la cadena es: %d\n",longitud);
    
    strcat(cadena,anadida);
    printf("Ahora la cadena es: %s\n", cadena);


    if(strstr(cadena, argv[2])!=NULL){
        printf("La cadena contiene a la otra.\n");
    }else{
        printf("La cadena no contiene a la otra.\n");
    }

    printf("El caracter que ocupa la posicion %d de su cadena es: %c\n", atoi(argv[1]), cadena[atoi(argv[1])]);

    return 0;
}