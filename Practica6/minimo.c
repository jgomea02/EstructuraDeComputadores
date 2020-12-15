#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculaminimo(int **pInt, int n, int m);
int inicializamatriz(int **pInt, int n, int m );

int main(int argc, char const *argv[])
{
    int** pInt;
    int n, m;
    srand(time(NULL));

    printf("Escribe el número de filas:\n");
    scanf("%d", &n);
    printf("Escribe el número de columnas :\n");
    scanf("%d", &m);

    pInt = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        *(pInt + i) = (int *)malloc(sizeof(int) * m); 
    }
    inicializamatriz(pInt, n, m);
    calculaminimo(pInt, n, m);
    free(pInt);
    return 0;
}

int inicializamatriz(int **pInt, int n, int m){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pInt[i][j] = rand() % 10 + 1;
        }
    }
}

int calculaminimo(int **pInt, int n, int m){
    int minimo=pInt[0][0];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(pInt[i][j] < minimo) {
                minimo = pInt[i][j];
            }
            printf("%d\t", pInt[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("El resultado más pequeño es: %d\n", minimo);
    }
