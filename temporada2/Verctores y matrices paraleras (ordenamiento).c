/*
Cargar en una matriz los nombres de 5 países y en un vector paralelo la cantidad de habitantes del mismo. 
Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes 
(de mayor a menor) e imprimir nuevamente. 

https://www.youtube.com/watch?v=UgTE8IHKtAk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=129
*/
#include <stdio.h>
#include <string.h>

void cargarDatos(char paises[5][40], int habitantes[5]){

  for (int f = 0; f < 5; f++){ //Ingresando los datos
    printf("Ingrese el nombre del pais: ");
    gets(paises[f]);
    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i",&habitantes[f]);
    printf("\n");

    fflush(stdin);
    
  }
}


void imprimir(char paises[5][40], int habitantes[5]){
    for (int f = 0; f < 5; f++){
        printf("%s \nCantidad: %i\n",paises[f],habitantes[f]);
    }
}


void ordenarPorNombreDePais(char paises[5][40], int habitantes[5]){
    char auxpaises[40];
    int auxhabitantes;

    for (int i = 0; i < 5; i++){
        for (int f = 0; f < 5-i; f++){
            if (strcmp(paises[f],paises[f+1])>0){
                strcpy(auxpaises,paises[f]); //Ordenando los paises
                strcpy(paises[f],paises[f+1]);
                strcpy(paises[f+1],auxpaises);
                auxhabitantes = habitantes[f]; //Ordenando los habitantes
                habitantes[f] = habitantes[f+1];
                habitantes[f+1] = auxhabitantes;
            }
        }
    }
}


void ordenarPorHabitantes(char paises[5][40], int habitantes[5]){
    char auxpaises[40];
    int auxhabitantes;

    for (int i = 0; i < 5; i++){
        for (int f = 0; f < 5-i; f++){
            if (habitantes[f] < habitantes[f+1]){
                strcpy(auxpaises,paises[f]); //Ordenando los paises
                strcpy(paises[f],paises[f+1]);
                strcpy(paises[f+1],auxpaises);
                auxhabitantes = habitantes[f]; //Ordenando los habitantes
                habitantes[f] = habitantes[f+1];
                habitantes[f+1] = auxhabitantes;
            }
        }
    }
}



int main(){
    char paises[5][40];
    int habitantes[5];

    cargarDatos(paises,habitantes);

    ordenarPorNombreDePais(paises,habitantes); //Ordenando por paises
    printf("Lista de paises odenados por nombres:\n");
    imprimir(paises,habitantes);

    ordenarPorHabitantes(paises,habitantes); //Odenando por habitantes
    printf("\nLista de paises odenados por habitantes:\n");
    imprimir(paises,habitantes);

    return 0;
}