#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int multiplica(int n, int **pInt1, int **pInt2, int **pInt3);
int imprime(int n, int **pInt);

int main(int argc, char const *argv[])
{

    int **pInt1, **pInt2, **pInt3;
    int n;
    srand(time(NULL));

    printf("Escribe el número de filas y columnas:\n");
    scanf("%d", &n);
    printf("\n");
    

    pInt1 = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        *(pInt1 + i) = (int *)malloc(sizeof(int) * n);
    }
    pInt2 = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        *(pInt2 + i) = (int *)malloc(sizeof(int) * n);
    }
    pInt3 = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        *(pInt3 + i) = (int *)malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pInt1[i][j] = rand() % 10 + 1;
            pInt2[i][j] = rand() % 10 + 1;
        }
    }
    imprime(n, pInt1);
    printf("\n");
    imprime(n, pInt2);
    printf("\n");
    multiplica(n, pInt1, pInt2, pInt3);
    printf("El producto de sus matrices de %d filas y columnas es:\n", n);
    imprime(n, pInt3);
    printf("\n");

    return 0;
}

int multiplica(int n, int **pInt1, int **pInt2, int **pInt3){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            pInt3[i][j]=0;
            for(int k = 0; k < n; k++){
                pInt3[i][j]+= pInt1[i][k]*pInt2[k][j];
            }
        }
    }
    return **pInt3;
}

int imprime(int n, int **pInt){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", pInt[i][j]);
        }
        printf("\n");
    }
}