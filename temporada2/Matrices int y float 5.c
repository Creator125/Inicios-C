/*
Definir una matriz de 2 filas y 5 columnas. Realizar su carga e impresión.
Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la matriz

https://www.youtube.com/watch?v=n1ih1CDVJ1I&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=120
*/
#include <stdio.h>

void cargarMatriz(int matriz[2][5]){

  for (int f = 0; f < 2; f++){
    for (int c = 0; c < 5; c++){
      printf("Ingrese un elemento numerico: ");
      scanf("%i",&matriz[f][c]);
    }
    printf("\n");
  }
}


void intercambiarFilas(int matriz[2][5]){

  int matriz_aux;

  for (int c = 0; c < 5; c++){
    matriz_aux = matriz[0][c];
    matriz[0][c] = matriz[1][c];
    matriz[1][c] = matriz_aux;
  }
}

void imprimirMatrizCompleta(int matriz[2][5]){

    printf("Matriz completa: \n");

    for (int f = 0; f < 2; f++){
        for (int c = 0; c < 5; c++){
            printf("%i ",matriz[f][c]);
        }

        printf("\n");
    }
    printf("\n");
}


int main(){

    int numeros[2][5];

    cargarMatriz(numeros);

    printf("La matriz ingresada: \n");
    imprimirMatrizCompleta(numeros);

    printf("\nLa matriz con filas intercambiadas:\n");
    intercambiarFilas(numeros);
    imprimirMatrizCompleta(numeros);
    
    return 0;
}