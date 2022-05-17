/*Ejercicio 13: Hacer un programa que imprima la suma de todos los números pares que hay desde 1 hasta n, 
y diga cuantos números hay. */

#include <stdio.h>

int main()
{
    int i,numero,contador=0;

    printf("Ingrese la cantidad numeros a analizar: "); scanf("%i",&numero);

    for (i = 1; i <= numero; i++){

        if (i % 2 == 0){ //Verificando los numeros pares
            printf("%i\n",i);
            
            contador ++; //contando los numeros pares
        }
    }
    
    printf("Cantidad de numeros pares: %i",contador);

    return 0;
}
