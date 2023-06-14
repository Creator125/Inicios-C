/*
Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. 
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.

https://www.youtube.com/watch?v=C8HlJ5GdC5U&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=62
*/
#include <stdio.h>

int main()
{
    int vertor1[4],vertor2[4],vertor3[4],i;

    printf("\tPrimer vector\n");
    for (i = 0; i < 4; i++){ //Primer vector
        printf("Ingrese un numero: ");
        scanf("%i",&vertor1[i]);
    }
    printf("\n"); //Linea en blanco
    printf("\tSegundo vector\n");
    for (i = 0; i < 4; i++){ //Segundo vector
        printf("Ingrese un numero: ");
        scanf("%i",&vertor2[i]);
    }
    for (i = 0; i < 4; i++){ //Tecer vector
        vertor3[i] = vertor1[i] + vertor2[i];
    }
    printf("\n"); //Linea en blanco
    printf("\tVector resultantes\n");
    for ( i = 0; i < 4; i++){ //Imprimendo los resultados
        printf("Vector[%i] = %i\n",i,vertor3[i]); 
    }

    return 0;
}