#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inicializa(int m[3][3]);
int producto(int m[3][3], int m1[3][3], int m2[3][3]);
int imprime(int m[3][3]);

int main(){
    srand(time(NULL));
    int matrix[3][3], matrix1[3][3], resultado[3][3];

    inicializa(matrix);
    imprime(matrix);
    printf("\n");
    inicializa(matrix1);
    imprime(matrix1);

    producto(matrix, matrix1, resultado);

    printf("El resultado del producto es:\n");
    imprime(resultado);

    return 0;
}
int inicializa(int m[3][3]){
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = rand() % 5 + 1;
        }
    }
    return m[3][3];
}
int producto(int m[3][3], int m1[3][3], int m2[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            m2[i][j]=0;
            for(int k = 0; k < 3; k++){
                m2[i][j]+=m[i][k]*m1[k][j];
            }
        }
    }
}
int imprime(int m[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

