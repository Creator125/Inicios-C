/*
Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.

https://www.youtube.com/watch?v=k4T-IjyvkUM&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=61
*/
#include <stdio.h>

int main()
{
    int nums[8],i,suma=0,mayor36=0,mayor50=0;

    for (i = 0; i < 8; i++){
        printf("Ingrese un numero: ");
        scanf("%i",&nums[i]); //Ingresando los numeros

        suma += nums[i]; //Sumando o acumulando todos los valores ingresados del vector

        if (nums[i] > 36){ //Sumando o acumulando todos los valores mayores a 36
            mayor36 += nums[i];
        }
        if (nums[i] > 50){ //Cantidad de valores mayores a 50
            mayor50++;
        }
    }
    
    printf("Suma total de los valores ingresados: %i\n",suma);
    printf("Suma total de los valores mayores a 35: %i\n",mayor36);
    printf("Cantidad total de valores mayores a 50: %i\n",mayor50);

    return 0;
}