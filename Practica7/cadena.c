#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void quitaespacios(char *cadena, char *cadenasin);
int main() {

	char *cadena;
    char *cadenasin;
    int tamanyo;

	printf("Introduzca el tamaño de la cadena: ");
	scanf("%d", &tamanyo);

	while ((getchar()) != '\n'); 

	cadena = (char*)malloc(sizeof(char)*tamanyo);
	cadenasin = (char*)malloc(sizeof(char)*tamanyo);

	printf("Escriba una cadena de %d caracteres: \n", tamanyo);
	fgets(cadena, tamanyo, stdin);

	quitaespacios(cadena, cadenasin);

	printf("La cadena sin espacios es: %s\n", cadenasin);
	

	free(cadena);
	free(cadenasin);

	return 0;
}

void quitaespacios(char *cadena, char *cadenasin) {

	int c = 0, d = 0;

	while (cadena[c] != '\0') {
    	if (cadena[c] != ' ') {
    		cadenasin[d] = cadena[c];
    		d++;
  		}
  		c++;
    }
 
   cadenasin[d] = '\0';

}