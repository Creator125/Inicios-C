//Hacer un progama que obtenga la media geometrica de tres numeros

#include <stdio.h>

int main(){
    //Definiedo las variables
    float num1,num2,num3,media;

    //Entrada y salida
    printf("Ingrese tres numeros: ");
    scanf("%f %f %f",&num1,&num2,&num3);

    //Hallando la media
    media =  (num1 + num2 + num3)/3;

    //Imprimiendo el resultado
    printf("La media geometrica es: %.2f",media);

    return 0;
}
