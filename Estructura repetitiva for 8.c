/*Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.

https://www.youtube.com/watch?v=sLdT_fPtSD4&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=48 */

#include <stdio.h>

int main()
{
    int i,n,contador=0;

    printf("Ingrese un numero del 1 al 10: ");
    scanf("%i",&n);

    for (i = 1; i <= 12; i++){
        contador = i * n; //Multiplicando todos los numeros por en ingresado

        printf("%i ",contador);
    }
    
    return 0;
}