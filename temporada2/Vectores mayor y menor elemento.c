//Cargar un vector de 5 elementos enteros. Imprimir el menor y un mensaje si se repite dentro del vector.

//https://www.youtube.com/watch?v=tF7_5AwoV3o&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=112

#include <stdio.h>

void cargar(int vector[5]) //Funcion para cargra los numeros del vector
{
    for (int i = 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%i",&vector[i]);
    }
}


void verificarVector(int vector[5]) //Funcion que imprimirá el numero menory si el numero se repite
{
    int menor = vector[0];
    int repeticion=0;

    for (int i = 0; i < 5; i++){
        if (vector[i] < menor){ //Hallando el numero menor
            menor = vector[i]; //Si el numero de la posicion de 'i' es menor entonces 'menor' cojerá el numero menor.
        }
        if (menor == vector[i]){ //Verificando si se repite
            repeticion=1;
        }
    }
    
    printf("\nEl numero menor es %i\n",menor);

    if (menor == 1){
        printf("El numero se repite dentro del vector.\n");
    }
    
}


int main() //Funcion principal
{
    int numeros[5];

    cargar(numeros); //Cargando los numeros de la matríz
    verificarVector(numeros); //Imprimiendo el numero menor del vector
    
    return 0;
}
/*En la proxima tendré cuenta la modurizacion y evitar que una funcion haga dos o más tareas*/