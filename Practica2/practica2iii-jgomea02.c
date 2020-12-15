#include <stdio.h>
int main (){
    float Celsius, Farenheit;

    printf("Introduce una temperatura en Celsius: ");

    scanf("%f", &Celsius);

    Farenheit= (Celsius * (9.0/5.0) + 32);
    
    printf("%f", Farenheit);

    printf("\nAlgoritmo finalizado\n");

	return 0;
}
