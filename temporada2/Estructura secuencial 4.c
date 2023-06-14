//Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.

//https://www.youtube.com/watch?v=ree4xj_5bf4&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=8

#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,suma,promedio;

    printf("Ingrese cuatro numeros: ");
    scanf("%i %i %i %i",&n1,&n2,&n3,&n4);//Pidiendo los cuanto numeros

    suma = n1 + n2 + n3 + n4; //Realizando la suma de los valores
    promedio = suma / 4; //Realizando el promedio

    printf("\nSuma total de los valores: %i \nPomedio: %i\n",suma,promedio); //Imprimiendo la suma y el promedio

    return 0;
}
