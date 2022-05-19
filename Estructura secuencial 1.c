//Realizar la carga de dos números enteros por teclado e imprimir su suma y su producto.

//https://www.youtube.com/watch?v=5M2gxtwpvIY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=5

#include <stdio.h>

int main()
{
    int num1,num2,suma,producto;

    printf("Ingrese 2 numeros: ");
    scanf("%i %i",&num1,&num2); //Pidiendo los dos numeros al usuario

    suma = num1 + num2; //Realizando la suma
    producto = num1 * num2; //Realizando el producto

    printf("Suma: %i\nPrducto: %i\n",suma,producto); //Imprimiendo la suma

    return 0;
}
