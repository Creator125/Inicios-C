/*
Confeccionar un programa que permita cargar un vector de 5 enteros y obtenga el mayor y el menor.
Implementar dos funciones:
1-Carga del vector
2-Otra función que reciba el vector y retorne el mayor y menor elemento del vector por medio de dos parámetros de tipo puntero:

void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor)

https://www.youtube.com/watch?v=HfvqnA5za_Q&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=148&pp=iAQB
*/
#include <stdio.h>
#include <conio.h>

#define TAMANO 5

void cargar(int vec[TAMANO]){
    for (int i = 0; i < TAMANO; i++){
        printf("ingrese un numero para la posicion %i: ", i);
        scanf("%i", &vec[i]);
    }
    printf("\n");
}

void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor){
    *pmayor = vec[0];
    *pmenor = vec[0];

    for(int i = 1; i < TAMANO; i++){    
        if(vec[i] > *pmayor){
            *pmayor = vec[i];
        }else if(vec[i] > *pmenor){
            *pmenor = vec[i];
        }
    }
}

int main(){
    int vector[TAMANO];
    int numMayor, numMenor;

    cargar(vector);
    mayorMenor(vector, &numMayor, &numMenor);
    printf("Numero mayor del vector: %i\n",numMayor);
    printf("Numero menor del vector: %i\n",numMenor);

    getch();
    return 0;
}
