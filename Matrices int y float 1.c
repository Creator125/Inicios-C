/*
Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.

              x    -    -    -
              -    x    -    -
              -    -    x    -
              -    -    -    x

https://www.youtube.com/watch?v=aGekQtvjh_Y&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=117
*/
#include <stdio.h>

void cargarMatriz(int matriz[4][4])
{
  for (int f = 0; f < 4; f++){
    for (int c = 0; c < 4; c++){
      printf("Ingrese un elemento numerico: ");
      scanf("%i",&matriz[f][c]);
    }
  }
}

void imprimirDiagonalPrincipal(int matriz[4][4])
{
  for (int i= 0; i < 4; i++){ 
    printf("%i ", matriz[i][i]); //El primer [i] es la fila en la que se recorrió cada 4 columas y el segundo [i] es el recorrido entre filas
  }
}

void imprimirMatrizCompleta(int matriz[4][4])
{
  for (int f = 0; f < 4; f++){
    for (int c = 0; c < 4; c++){
      printf("%i ",matriz[f][c]);
    }

    printf("\n");
  }
}

int main() //Princial
{
  int numeros[4][4];

  cargarMatriz(numeros);
  imprimirMatrizCompleta(numeros);
  printf("\n");

  printf("Los elementos de la diagonal principal son: \n");
  imprimirDiagonalPrincipal(numeros);
  printf("\n");
  
  return 0;
}
