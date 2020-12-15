#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz(int m[3][6]);
int suma(int m[3][6], int v[6]);

int main() {
    int matrix[3][6];
    int resultado[6];
    
    matriz(matrix);

    for(int i = 0; i<3; i++){
        for(int j =0; j<6; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    suma(matrix,resultado);
    printf("El resultado es:\n");
    for(int i=0; i<6; i++){
        printf("%d\t", resultado[i]);
    }

    return 0;
}
int matriz(int m[3][6]){
    srand(time(NULL));

    for(int i = 0; i<3; i++){
        for(int j =0; j<6; j++){
            m[i][j]=rand()%10+1;
        }
    }
    return m[3][6];
}
int suma(int m[3][6], int v[6]){
    for(int i=0; i<6;i++){
        v[i]=m[0][i]+m[1][i]+m[2][i];
    }
    return v[6];
}