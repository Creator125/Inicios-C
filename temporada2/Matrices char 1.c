/*
Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir los nombres.
3-Ingresar otro nombre y verificar si se encuentra almacenado en la matriz.

https://www.youtube.com/watch?v=o1tScN23y3U&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=122
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

    printf("Matriz completa: \n");

    for (int f = 0; f < 5; f++){
        printf("%s\n",datos[f]);
    }
}

void verificarDatos(char dato[20], char datos[5][20]){

    int verificacion = 0;

    printf("Ingrese un nombre: ");
    gets(dato);

    for (int f = 0; f < 5; f++){ //Verificando el nombre ingreasado si está en la lista
        if (strcmp(dato,datos[f])==0){
            verificacion = 1;
        }
    }

    if (verificacion != 0){ //Imprimiendo el resultado
        printf("\nEl nombre ingresado esta en la lista\n");
    }else{
        printf("\nEl nombre ingresado no esta en la lista\n");
    }
}

int main(){
    char nombres[5][20],nombre[20];

    cargarMatriz(nombres);
    imprimirMatrizCompleta(nombres);
    verificarDatos(nombre,nombres);

    return 0;
}
