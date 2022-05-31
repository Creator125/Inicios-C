/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente 
la suma de los valores ingresados y su promedio. Este problema ya lo desarrollamos empleando el while, 
lo resolveremos empleando la estructura for.

https://www.youtube.com/watch?v=PQPOKGtawNE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=41 */

#include <stdio.h>

int main()
{
    int n,i,suma=0,promedio;

    for (i=1; i<=10; i++){ 
        printf("Ingrese el valor %i: ",i); //Se preguntará el valor 10 veces
        scanf("%i",&n);

        suma += n; //Se sumará el numeros ingreasado por los valores ingresado anteriormente
    }

    promedio = suma / 10; //Se hallará el promedio obtenido en por la suma en el bucle

    printf("\nSuma total: %i \nPromedio: %i\n",suma,promedio);

    return 0;
}
