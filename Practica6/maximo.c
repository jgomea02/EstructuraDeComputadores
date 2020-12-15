#include <stdio.h>
#include <stdlib.h>

int calculamaximo(int n, int *pInt);

int main(int argc, char const *argv[]) {
    int n;
    int * pInt;
    printf("Escriba la cantidad de numeros que quiere leer: ");
    scanf("%d", &n);

    pInt = (int*)malloc(sizeof(int)*n); 

    printf("Escribe los %d numeros separandolos por intro\n", n);

    for (int i = 0; i < n; i++)         
    {
        scanf("%d", pInt + i);      
    }
    
    
    printf("El numero mas grande es: %d \n", calculamaximo(n, pInt));
    printf("Numeros del puntero: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", *(pInt + i));
    }
    

    free (pInt);                       
    return 0;
}
int calculamaximo(int n, int *pInt){
    int mayor = 0;

    for (int i = 0; i < n; i++)
    {
        if (mayor < *(pInt + i))
        {
            mayor = *(pInt + i);
        }     
    }
    return mayor;
}