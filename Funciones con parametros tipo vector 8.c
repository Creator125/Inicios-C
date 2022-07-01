/*
Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor. 
Hacer las dos actividades en funciones distintas.

https://www.youtube.com/watch?v=BMl4htFY0Dw&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=110
*/
#include <stdio.h>

void cargar(int vector[10]) //Funcion que cargará los elementos del vector
{
    for (int i = 0; i < 10; i++){
        printf("Ingrese un numero: ");
        scanf("%i",&vector[i]);
    }
}

void verificarOden(int vector[10]) //Funcion que verificará si el vector está ordenado de menor a mayor
{
    int ordenado;

    for (int i = 0; i < 10; i++){
        if (vector[i] < vector[i+1]){
            ordenado = 1;
        }else{
            ordenado = 0;
            break;
        }
    }

    if (ordenado == 1){
        printf("Los numeros estan ordenados de menor a mayor");
    }else{
        printf("Los numeros estan desordenados");
    }
    
    
}


int main() //Funcio principal
{
    int matriz[10];

    cargar(matriz); //Cargando los elemento del vector
    verificarOden(matriz); //Verficando si los elementos del vector estan ordenados de menor a mayor

    return 0;
}
