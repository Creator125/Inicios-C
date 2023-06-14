//Elaborar una función que nos retorne el perímetro de un cuadrado pasando como parámetros el valor de un lado. 

//https://www.youtube.com/watch?v=JuD3aJX1WPc&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=100

#include <stdio.h>

int calcularPerimetro(int lado) //La funcion que calcula el perímetro del lado delcuadrado
{
    int perimetro = lado * 4;

    return perimetro;
}


int main() //Funcion principal
{
    int num;

    printf("Ingrese el numero del lado del cuadrado: ");
    scanf("%i",&num);

    printf("\nEl perimetro del cadrado es %i\n",calcularPerimetro(num));

    return 0;
}
