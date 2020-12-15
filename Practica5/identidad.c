#include <stdio.h>

char matriz(int matriz0[9][9]);
int main() {
    int matrix[9][9];

    matriz(matrix);

    printf("La matriz es: \n");

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            printf("%d",matrix[i][j]);         
        }
         printf("\n");
    }
    
    return 0;
}
char matriz(int matriz0[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==j){
                matriz0[i][j]=1;
            }else{
                matriz0[i][j]=0;
            }
        }
    }
    return matriz0[9][9];
}