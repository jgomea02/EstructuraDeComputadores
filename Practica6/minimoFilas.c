#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int minimoFilas(int **pInt, int n, int m, int v[n]);

int main(int argc, char const *argv[])
{
    int **pInt;
    int n, m, v[n];
    srand(time(NULL));

    printf("Escribe el número de filas:\n");
    scanf("%d", &n);
    printf("Escribe el número de columnas :\n");
    scanf("%d", &m);

    pInt = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
    {
        *(pInt + i) = (int *)malloc(sizeof(int) * m);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pInt[i][j] = rand() % (10 + 10 + 1) - 10;
        }
    }

    minimoFilas(pInt, n, m, v);

    free(pInt);
    return 0;
}

int minimoFilas(int **pInt, int n, int m, int v[n])
{
    int minimo = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pInt[i][j] < minimo)
            {
                minimo = pInt[i][j];
            }
            v[i] = minimo;
            printf("%d\t", pInt[i][j]);
        }
        minimo = 10;
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("El valor minimo en la fila %d es: %d\n", i, v[i]);
    }
}