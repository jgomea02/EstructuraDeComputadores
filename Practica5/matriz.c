#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int matriz(int m[5][5]);

int main() {
    int matrix[5][5];
    srand(time(NULL));

    matriz(matrix);

    printf("La matriz es:\n");

    for(int i = 0; i<5; i++){
        for(int j =0; j<5; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int matriz(int m[5][5]){  
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            m[i][j]=rand()%(15-3+1)+3;
        }
    }
    return m[5][5];
}