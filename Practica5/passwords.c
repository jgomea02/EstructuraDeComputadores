#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char contrasenya(int v[9]);
int main() {
    int vector[9];
    srand(time(NULL));

    for(int i=0; i<8;i++){
        vector[i]=rand()%25 + 1;
    }  

    contrasenya(vector);

    return 0;
}
char contrasenya(int v[9]){
    char abecedario[28]="abcdefghijklmnopqrstuvwxyz\0";
    char resultado[9];
    for(int i=0;i<8;i++){
        resultado[i]=abecedario[v[i]];
    }
    printf("La contraseña es: %s \n", resultado);
}


