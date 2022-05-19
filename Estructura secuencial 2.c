/*Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo 
(El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro) */

//https://www.youtube.com/watch?v=Fagwsz99Bd4&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=6

#include <stdio.h>

int main()
{
    int lado,perimetro;

    printf("Ingrese el lado del cuadrado: ");
    scanf("%i",&lado); //Piediendo el lado del cuadrado

    perimetro = lado * 4; //Hallando el perimetro

    printf("Perimetro del cuadrado: %i\n",perimetro); //Imprimiendo el perimetro


    return 0;
}
