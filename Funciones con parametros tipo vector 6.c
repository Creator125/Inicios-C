/*
Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero.
Se deben codificar las siguientes funciones:
1-Carga del vector.

void cargar(int vector[8])

2-Retornar el valor acumulado de todos los elementos del vector.

int sumar(int vector[8])

3-Retornar el valor acumulado de los elementos del vector que sean mayores a 36.

int sumaMayores36(int vector[8])

4-Retornar la cantidad de componentes con valores mayores a 50.

int cantidadMayores50(int vector[8])



https://www.youtube.com/watch?v=8JTiH_GgjIM&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=108
*/
#include <stdio.h>

void cargar(int vector[8]) //Funcion que cargará elvector
{
    for (int i = 0; i < 8; i++){
        printf("Ingrese un numero: ");
        scanf("%i",&vector[i]);
    }
    
}


int sumar(int vector[8]) //Funcion que retornará el valor acumulado de todos los numeros del vector
{
    int suma=0;

    for (int i = 0; i < 8; i++){
        suma += vector[i];
    }
    
    return suma;
}


int sumaMayores36(int vector[8]) //Funcion que retornará el valor acumulado mayor a 36
{
    int suma36=0;

    for (int i = 0; i < 8; i++){
        if (vector[i] > 36){
           suma36 += vector[i];
        }
    }

    return suma36;
}


int cantidadMayores50(int vector[8]) //Funcion que retornará la cantidad de mayores a 50
{
    int contador50=0;

    for (int i = 0; i < 8; i++){
        if (vector[i] > 50){
           contador50++;
        }
    }

    return contador50;
}


int main() //Funcion principal
{
    int vector[8];

    cargar(vector); //Ingresando los valores del vector

    printf("\n");
    printf("valor acumulado de todos los elementos: %i\n", sumar(vector));
    printf("valor acumulado de los elementos del vector que sean mayores a 36: %i\n", sumaMayores36(vector));
    printf("cantidad de componentes con valores mayores a 50: %i", cantidadMayores50(vector));

    return 0;
}