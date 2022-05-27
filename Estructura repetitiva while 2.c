/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente 
la suma de los valores ingresados y su promedio

https://www.youtube.com/watch?v=sdAGt3h2cS8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=31 */

#include <stdio.h>

int main()
{
    int n,i=1,suma=0,promedio;

    while (i <= 10){ 
        printf("Ingrese el valor %i: ",i); //Se preguntará el valor 10 veces
        scanf("%i",&n);

        suma += n; //Se sumará el numeros ingreasado por los valores ingresado anteriormente
        i++; //El iterador inclementára su valor (1 - 10)
    }

    promedio = suma / 10; //Se hallará el promedio obtenido en por la suma en el bucle

    printf("\nSuma total: %i \nPromedio: %i\n",suma,promedio);

    return 0;
}