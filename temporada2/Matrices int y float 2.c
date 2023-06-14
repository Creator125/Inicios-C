/*Crear y cargar una matriz de 3 filas por 4 columnas. 
Imprimir la primera fila. 
Imprimir la última fila e imprimir la primer columna.

https://www.youtube.com/watch?v=kdgqZSDvvak&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=117*/

#include <stdio.h>

void cargarMatriz(int matriz[3][4])
{
  for (int f = 0; f < 3; f++){
    for (int c = 0; c < 4; c++){
      printf("Ingrese un elemento numerico: ");
      scanf("%i",&matriz[f][c]);
    }
    printf("\n");
  }
}


void primerFila(int matriz[3][4]) //Funcion para imprimir primera fila
{
    printf("Primer fila de la matriz: \n");

    for (int i = 0; i < 4; i++){
        printf("%i ",matriz[0][i]);
    }
    printf("\n");
}


void ultimaFila(int matriz[3][4]) //Funcion para imprimir ultima fila
{
    printf("Ultima fila de la matriz: \n");

    for (int i = 0; i < 4; i++){
        printf("%i ",matriz[2][i]);
    }
    printf("\n");
}


void primercolumna(int matriz[3][4]) //Funcion para imprimir ultima fila
{
    printf("Primer columna de la matriz: \n");

    for (int i = 0; i < 3; i++){
        printf("%i ",matriz[i][0]);
    }
    printf("\n");
}


void imprimirMatrizCompleta(int matriz[3][4])
{
    printf("Matriz completa: \n");

    for (int i = 0; i < 3; i++){
        for (int x = 0; x < 4; x++){
            printf("%i ",matriz[i][x]);
        }

        printf("\n");
    }
    printf("\n");
}


int main()
{
    int numeros[3][4];

    cargarMatriz(numeros);

    imprimirMatrizCompleta(numeros);

    primerFila(numeros);
    ultimaFila(numeros);
    primercolumna(numeros);

    return 0;
}