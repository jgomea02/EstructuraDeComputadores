#include <stdio.h>
 int main() {
     int Num, Total;
    printf("Escribe cuantos números quieres sumar: ");
    scanf("%d", &Num);

    Total=0;

    if(Num>=1){
        for(int i=0; i<=Num; i++){
            Total = Total + i;
        }
    printf("La suma es: %d \n", Total);
    }
    else{
        printf("El número ha de ser mayor o igual a 1\n");
    }
    printf("Fin del algoritmo\n");
    return 0;
 }