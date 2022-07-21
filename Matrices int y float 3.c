/*
Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna 
(es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente) Imprimir luego la matriz.

https://www.youtube.com/watch?v=AboBwVLYqHg&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=118
*/
#include <stdio.h>

void cagarColumnas(int matriz[2][5])
{
    for (int c = 0; c < 5;  c++){
        for (int f = 0; f < 2; f++){
            printf("Ingrese un elemento numerico de la fila %i y columna %i: ",f,c);
            scanf("%i",&matriz[f][c]);
        }
        printf("\n");
    }
}

void imprimirMatrizCompleta(int matriz[2][5])
{
    printf("Matriz completa: \n");

    for (int f = 0; f < 2; f++){
        for (int c = 0; c < 5; c++){
            printf("%i ",matriz[f][c]);
        }

        printf("\n");
    }
    printf("\n");
}

int main()
{
    int numeros[2][5];

    cagarColumnas(numeros);
    imprimirMatrizCompleta(numeros);
    
    return 0;
}

