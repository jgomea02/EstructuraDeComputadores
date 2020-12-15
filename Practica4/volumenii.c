#include <stdio.h>

float volumen_ortoedro(float side1, float side2, float height);
float volumen_cono(float ratio, float height);

int main() {
    float a, b, c, d, e, volumen;
    int selected;
    do{
        printf("1- Volumen de un ortoedro.\n");
        printf("2- Volumen de un cono\n");
        printf("3-Salir \n");
        printf("Seleccione que tipo de volumen desea calcular(número): \n");
        scanf("%d", &selected);

         if(selected ==3){
            printf("Programa terminado\n");
        }else if(selected ==1 || selected ==2){
            switch(selected){
                case 1:
                    printf("Indique la medida del primer lado: \n");
                    scanf("%f", &a);
                    printf("Indique la medida del segundo lado: \n");
                    scanf("%f", &b);
                    printf("Indique la altura: \n");
                    scanf("%f", &c);
                    volumen = volumen_ortoedro(a,b,c);
                    printf("El volumen es %f\n", volumen);
                break;
                case 2:
                    printf("Indique la medida del radio de la base: \n");
                    scanf("%f", &d);
                    printf("Indique la medida de la altura: \n");
                    scanf("%f", &e);
                    volumen = volumen_cono(d,e);
                    printf("El volumen es %f\n", volumen);
                break;
            }
        }

    }while(selected !=3);    

        return 0;
}



        float volumen_ortoedro(float side1, float side2, float height){
            float resultado;
            resultado = side1 * side2 * height;
            return (resultado);
        }

        float volumen_cono(float ratio, float height){
            float resultado;
            resultado = ((float)1/3 * 3.14 * (ratio * ratio) * height);
            return (resultado);
            }
