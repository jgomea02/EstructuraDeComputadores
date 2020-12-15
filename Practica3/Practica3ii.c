#include <stdio.h>

int main() {
    int Num;
   
    printf("Escribe la nota númerica: ");
    scanf("%d", &Num);

    if((Num==5) || (Num==6)){
        printf("Aprobado\n");
    }else{
        if((Num==7) || (Num== 8)){
            printf("Notable\n");
        }else{
            if(Num==9 || Num==10){
                printf("Sobresaliente\n");
            }else{
                printf("Suspenso\n");
            }
        }
    }
    printf("Fin del algoritmo\n");
    return 0;
}
