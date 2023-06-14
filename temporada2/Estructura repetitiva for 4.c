/* Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.

Este tipo de problemas también se puede resolver empleando la estructura repetitiva for. Lo primero que se 
hace es cargar una variable que indique la cantidad de valores a ingresar. Dicha variable se carga antes de 
entrar a la estructura repetitiva for.

La estructura for permite que el valor inicial o final dependa de una variable cargada previamente por teclado

https://www.youtube.com/watch?v=pv6lbNjNzBk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=44 */

#include <stdio.h>

int main()
{
    int num,i,cantidad=0,valor;

    printf("Ingrese la cantidad de numeros a calcular:\n");
    scanf("%i",&num);

    for (i = 1; i <= num; i++){
        printf("(%i).Ingrese un numero: ",i);
        scanf("%i",&valor);

        if (valor >= 1000){ //Contando los numeros que sean mayores o iguales a 1000
            cantidad++;
        }
    }
    
    printf("Numeros mayores o iguales a 100: %i",cantidad);

    return 0;
}