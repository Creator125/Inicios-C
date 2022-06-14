/*
Confeccionar una aplicación que solicite la carga de dos valores enteros y muestre su suma.
Repetir la carga de otros dos valores, sumarlos y mostrar.
Mostrar una línea separadora después de cada vez que cargamos dos valores y mostramos su suma.

https://www.youtube.com/watch?v=VUIfLvpBS0U&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=88
*/
#include <stdio.h>

void cargarSuma() //Funcion que cargará los dos valores para la suma
{
    int var1,var2,suma;

    printf("Ingrese dos numeros para la suma: ");
    scanf("%i %i",&var1,&var2);

    suma = var1 + var2;

    printf("Suma: %i",suma);
}

void lineaSeparadora() //La funcion que imprime una linea separadora
{
    printf("\n______________________________\n\n");
}

int main() //La fución principal de toda la vida
{
    cargarSuma(); //Realizando la suma
    lineaSeparadora(); //Linea separadora
    cargarSuma(); //Realizando la suma de nuevo
    lineaSeparadora(); //Linea separadora

    return 0;
}