//Ejercicio 6: Calcule la media aritmética de 3 números cualesquiera

#include <stdio.h>

int main( ){
    //Definiedo las variables
    int num1,num2,num3;
    float resul;

    //Entrada y salida
    printf("Ingrese tres números: "); scanf("%d %d %d",&num1,&num2,&num3);

    //Realizando la operacion
    resul = (num1 + num2 + num3)/3;

    //Imprimiendo el resultado
    printf("\nLa medida aritmetica de los 3 numeros es: %.2f",resul);

    return 0;
}