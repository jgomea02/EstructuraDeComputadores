#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz(int m[6][6]);
int suma(int m[6][6]);

int main() {
    int matrix[6][6];
    int resultado;
    srand(time(NULL));

    matriz(matrix);
    for(int i=0; i<6; i++){
        for(int j =0; j<6;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    resultado=suma(matrix);
    printf("El resultado es: %d \n", resultado);
    return 0;
}
int matriz(int m[6][6]){
    for(int i=0; i<6; i++){
        for(int j =0; j<6;j++){
            m[i][j]=rand()%10+1;
        }
    }
    return m[6][6];
}
int suma(int m[6][6]){
    int suma =0;
    for(int i=0; i<6; i++){
        for(int j =0; j<6;j++){
            suma = suma + m[i][j];
        }
    }
    return suma;
}