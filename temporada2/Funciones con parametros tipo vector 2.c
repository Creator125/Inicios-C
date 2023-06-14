/*
Definir tres vectores de tipo entero. Realizar la carga de los dos primeros por teclado. 
Definir una única función que realice la carga de un vector y llamar a dicha función dos veces pasando el primer y segundo vector definido.
Plantear otra función que reciba tres vectores y proceda a sumar elemento a elementos los dos primeros vectores y se carguen en el tercer vector.
Imprimir los tres vectores.

https://www.youtube.com/watch?v=VfvRqbmq8Iw&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=104
*/
#include <stdio.h>

void cargarVector(int vector[5]) //La funcion que cargará los datos del vector
{
    printf("Cargar del vector:\n");
    
    for (int i = 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%i",&vector[i]);
    }
    
}

void crearVector(int vec1[5],int vec2[5],int suma_vector[5]) //La funcion que cargará tres vectores para suma los dos en el tercero
{
    for (int i = 0; i < 5; i++){
        suma_vector[i] = vec1[i] + vec2[i];
    }
}

void imprimirVector(int vector[5]) //La funcion que imprimirá los datos almacenados en el vector
{
    for (int i = 0; i < 5; i++){
        printf("%i ",vector[i]);
    }

    printf("\n");
}

int main() //Funcion principal
{
    int vector1[5],vector2[5],vector_suma[5];

    cargarVector(vector1); //Cargando los datos de vector1
    cargarVector(vector2); //Cargando los datos de vector2

    crearVector(vector1,vector2,vector_suma); //vector_suma obtendrá la suma de los dos primeros vectores (vector1 + vertor2)

    //Imprimiendo los vectores
    imprimirVector(vector1);
    imprimirVector(vector2);
    imprimirVector(vector_suma);

    return 0;
}

