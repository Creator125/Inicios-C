//Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor. 

//https://www.youtube.com/watch?v=R44PknHPVAg&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=119

#include <stdio.h>

void cargarMatriz(int matriz[3][4]){

  for (int f = 0; f < 3; f++){
    for (int c = 0; c < 4; c++){
      printf("Ingrese un elemento numerico: ");
      scanf("%i",&matriz[f][c]);
    }
    printf("\n");
  }
}

void imprimirMatrizCompleta(int matriz[3][4]){

    printf("Matriz completa: \n");

    for (int f = 0; f < 3; f++){
        for (int c = 0; c < 4; c++){
            printf("%i ",matriz[f][c]);
        }

        printf("\n");
    }
    printf("\n");
}

void elementoMayor(int matriz[3][4]){

    int mayor = matriz[0][0];

    for (int f = 0; f < 3; f++){
        for (int c = 0; c < 4; c++){

            if (matriz[f][c] > mayor){ //Se verificará si el elemento matriz es mayor a la variable 'mayor'
                mayor = matriz[f][c]; //La variable 'mayor' será actualizada con un elemento de la matriz mayor que el anterior
            } 
        }
    }

    printf("\nElemento mayor es %i\n",mayor);
}


int main(){
    
    int numeros[3][4];

    cargarMatriz(numeros);
    imprimirMatrizCompleta(numeros);
    elementoMayor(numeros);

    return 0;
}
