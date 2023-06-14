/*
Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir los nombres.
3-Ordenar alfabéticamente los nombres.

https://www.youtube.com/watch?v=xXzdpmaiNs8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=123
*/
#include <stdio.h>
#include <string.h>

void cargarMatriz(char datos[5][20]){

  for (int f = 0; f < 5; f++){
    printf("Ingrese el nombre: ");
    gets(datos[f]);
  }
}

void imprimirMatrizCompleta(char datos[5][20]){

    for (int f = 0; f < 5; f++){
        printf("%s\n",datos[f]);
    }
}


void ordenar(char datos[5][20]){
    char aux[20];

    for (int i = 0; i < 4; i++){
        for (int f = 0; f < 4; f++){
            if (strcmp(datos[f],datos[f+1])>0){ //Ordenando los nombres alfabeticamnetes
                strcpy(aux,datos[f]);
                strcpy(datos[f],datos[f+1]);
                strcpy(datos[f+1],aux);
            }
        }   
    }
}


int main(){
    char nombres[5][20];

    cargarMatriz(nombres);

    printf("\nMatriz ingresada: \n");
    imprimirMatrizCompleta(nombres);

    ordenar(nombres);

    printf("\nMatriz ordenada: \n");
    imprimirMatrizCompleta(nombres);
}