/* Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las 
dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo. 

https://www.youtube.com/watch?v=ViwFAIi4uD8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=38 */

#include <stdio.h>

int main()
{
    int suma1=0,suma2=0,i=1,n;

    while (i <= 15){ //Lista 1
        printf("Lista 1: Ingrese 15 valores (%i): ",i);
        scanf("%i",&n); //El numero que ingresará 15 veces

        suma1 += n; //Acumulando los valores ingresados
        i++;
    }
    
    printf("\n");

    i = 1; //Alistando el iterador para la lista 2

    while (i <=  15){ //Lista 2
        printf("Lista 2: Ingrese 15 valores (%i): ",i);
        scanf("%i",&n); //El numero que ingresará 15 veces

        suma2 += n; //Acumulando los valores ingresados
        i++;
    }
    
    if (suma1 > suma2){ //Comparando las dos listas
        printf("\nLista 1 mayor\n");
    } else if (suma1 < suma2){
        printf("\nLista 2 es mayor\n");
    }else{
        printf("\nListas iguales\n");
    }

    return 0;
}