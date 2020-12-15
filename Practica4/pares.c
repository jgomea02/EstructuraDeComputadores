#include <stdio.h>

int pares(int num1, int num2);

int main() {
    int a,b;
    printf("Introduzca un número:\n");
    scanf("%d", &a);
    printf("Introduzca otro número distinto:\n");
    scanf("%d", &b);

    if(b<a){
        printf("ERROR. El segundo número es menor que el primero.\n");
    }else {
        pares(a,b);
    }
    return 0;
}

int pares(int num1, int num2){
    for(int i = num2; i >= num1; i--){ //de esta forma tambien imprime los extremos si son pares
        if((i % 2) == 0){
            printf("%d ", i);
        }
    }
}