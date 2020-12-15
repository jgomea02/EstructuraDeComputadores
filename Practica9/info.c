#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read(int tamanyo[5], char matrix[5][100]);

void search(int line, int tamanyo[5], char matrix[5][100], char letra[1]);

void print(int line, int tamanyo[5], char matrix[5][100]);

int main() {

	int tamanyo[5];
	char matrix[5][100];
	int line;
	char letra[1];
	
	line = read(tamanyo, matrix);
	
	printf("Escriba una letra mayúscula: ");
	fgets(letra, 2, stdin);
	
    search(line, tamanyo, matrix, letra);

    printf("\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("\n");

    printf("Todas las opciones eran: \n");

	print(line, tamanyo, matrix);

	return 0;
}

int read(int tamanyo[5], char matrix[5][100]) {

	FILE *parchivo;
	char *cadena = NULL;
	size_t tam = 0;
	ssize_t bytesleidos;
	int i = 0;

	parchivo = fopen("info.txt", "r");	

	if (parchivo == NULL) {
		fprintf(stderr, "Error al abrir el archivo.\n");
	} else {
		do {
		 	bytesleidos = getline(&cadena, &tam, parchivo);
		 	if (bytesleidos != -1) {
		 		strncpy(matrix[i], cadena, bytesleidos-1);
                //matrix[i][bytesleidos]= '\0';
		 		tamanyo[i] = bytesleidos;
		 		i++;
		 	}
		} while (bytesleidos != -1);
		free(cadena);
		fclose(parchivo);
	}

	return i;

}

void print(int line, int tamanyo[5], char matriz[5][100]) { 

	for (int i = 0; i < line; i++) {
        int fin = 0;
		for (int j = 0; j < 100 && fin == 0; j++) {
			if (j < tamanyo[i]-1) {
				printf("%c", matriz[i][j]);
			} else {
				fin = 1;
			}
		}
		printf("\n");
	}

}

void search(int line, int tamanyo[5], char matrix[5][100], char letra[1]) {
    
    printf("Personas que empiezan por la letra %c: \n", letra[0]);

	for (int i = 0; i < line; i++) {
        int fin = 0;
		if (matrix[i][0] == letra[0]) {
			for (int j = 0; j < 100 && fin == 0; j++) {
				if (j < tamanyo[i]-1) {
					printf("%c", matrix[i][j]);
				} else {
					fin = 1;
				}
			}
			printf("\n");
		}
	}

}