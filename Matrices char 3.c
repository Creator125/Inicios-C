/*
Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir el nombre alfabéticamente menor.

https://www.youtube.com/watch?v=lod6eSutvnA&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=124
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


void menor(char datos[5][20]){
    char men[20];
    strcpy(men, datos[0]);

    for (int f = 0; f < 4; f++){
        if (strcmp(datos[f],men)<0){ //Verificando el nombre menor
            strcpy(men,datos[f]);
        }
    }
    
    printf("\nNombre menor afabeticamente: %s\n",men);   
}


int main(){
    char nombres[5][20];

    cargarMatriz(nombres);
    imprimirMatrizCompleta(nombres);
    menor(nombres);

    return 0;
}