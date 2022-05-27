/* Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30

https://www.youtube.com/watch?v=uNNRh0j4bvM&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=30 */

#include <stdio.h>

int main()
{
    int n,i=1;

    printf("Ingrese un numero para contar: ");
    scanf("%i",&n); //Numero con el que terminara el conteo

    printf("\n"); //Linea vacia en la impresion

    while (i <= n){ //Realizando el conteo
        printf("%i ",i); //Imprimiendo el numero

        i++; //Incrementado su valor
    }
    
    printf("\n"); //Linea vacia en la impresion

    return 0;
}
