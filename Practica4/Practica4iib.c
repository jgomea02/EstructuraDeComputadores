#include <stdio.h>

int main() {
    int Base, Exp, Pot;
    printf("Escribe un número (base): ");
    scanf("%d", &Base);
    printf("Escribe un número (exponenete): ");
    scanf("%d", &Exp);

    if((Base >= 1) && (Exp >= 1)){
        Pot=1;
        do{
            Pot = Pot * Base;
            Exp = Exp-1;
        }
        while(Exp>=1);
        printf("la potencia es: %d \n", Pot );
    }
    else{
        printf("La base y el exponente han de ser mayores o iguales");
    }
    return 0;
}