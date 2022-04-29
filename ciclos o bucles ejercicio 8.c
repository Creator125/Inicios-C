//Ejercicio 8: Hacer un árbol con '*'

#include <stdio.h>

int main()
{
    int i,asterisco,filas,es_blanco;

    printf("\tCrea tu arbol\n");
    printf("Ingrese la cantidad de filas para el arbol: ");
    scanf("%i",&filas);

    for (i = 1; i <= filas; i++){

        //Imprimiendo los espacios en blanco
        for (es_blanco = filas; es_blanco >= i; es_blanco--){
            printf(" ");
        }

       //Imprimiendo el aterisco
       for(asterisco=1; asterisco <= i; asterisco++){
           printf("*");
       }
        /*Al salir de los bucles: 
        El bucle que imprime los espacios en blanco ( ).
        El bucle que imprime los ateriscos (*)

        Se imprimirá un salto de linea */
       printf("\n");
    }

    return 0;
}
