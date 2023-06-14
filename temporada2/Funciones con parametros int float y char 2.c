/*
Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado. 
La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro.

En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20

https://www.youtube.com/watch?v=b9ToswOLYc8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=92
*/
#include <stdio.h>

void calcularSuperficie(int lado) //La funcion que calcula y muestra la superficie
{
    int superficie = lado * lado;

    printf("La superficie del cuadrado de lado %i es %i\n",lado,superficie);
}


void calcularPerimetro(int lado) //La funcion que calcula y muestra el perímetro
{
    int perimetro = lado * 4;

    printf("El perimetro del cuadrado del lado %i es %i\n",lado,perimetro);
}


int main() //Funcion primcipal
{
    int i;

    for (i = 10; i <= 20; i++){
        calcularSuperficie(i); //Calculando la superficie del iterador
        calcularPerimetro(i); //Calculando el perimetro del iterador
    }
    
    return 0;
}

