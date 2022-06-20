//Elaborar una función que reciba tres enteros y nos retorne el valor promedio de los mismos. 

//https://www.youtube.com/watch?v=cHlmKAQxm4M&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=99

#include <stdio.h>

int obtenerPromedio(int var1, int var2, int var3) //La funcion que obtendrá el valor promedio de tres enteros
{
    int promedio = (var1+ var2 + var3) / 3;

    return promedio;
}

int main() //Funcion principal
{
    int num1,num2,num3;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&num1,&num2,&num3);

    printf("\nEl promedio de los numeros es %i\n",obtenerPromedio(num1,num2,num3));
    
    return 0;
}
