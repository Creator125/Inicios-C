/*Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, 
luego ordenar de menor a mayor e imprimir nuevamente. 

https://www.youtube.com/watch?v=UBgvE56nGrU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=114
*/
#include <stdio.h>

void cargar(int vector[5]) //Funcion que cargará el vector
{
    for (int i = 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%i",&vector[i]);
    }
}

void ordenarMenorMayor(int vector[5]) //Funcion que ordenará de mayor a menor
{
    for (int i = 0; i < 4; i++){
        for (int x = 0; x < 4-i; x++){
            if (vector[i] > vector[i+1]){
                int aux = vector[x];
                vector[x] = vector[x+1];
                vector[x+1] = aux;
            }
        }
    }
}

void ordenarMayorMenor(int vector[5]) //Funcion que ordenará de menor a mayor
{
    for (int i = 0; i < 4; i++){
        for (int x = 0; x < 4-i; x++){
            if (vector[i] < vector[i+1]){
                int aux = vector[x];
                vector[x] = vector[x+1];
                vector[x+1] = aux;
            }
        }
    }
}


void imprimir(int vector[5]) //Funcion que imprimirá el vector
{
    for (int i = 0; i < 5; i++){
        printf("%i ",vector[i]);
    }
}


int main() //Funcion principal
{
    int numeros[5];

    cargar(numeros); //Cargando los elementos del vector
    ordenarMenorMayor(numeros); //Ordenado de menor a mayor los elementos del vector

    printf("\nOrdenado de menor a mayor.\n"); 
    imprimir(numeros);

    ordenarMayorMenor(numeros); //Ordenado de mayor a menor los elementos del vector

    printf("\nOrdenado de mayor a menor.\n"); 
    imprimir(numeros);

    return 0;
}
