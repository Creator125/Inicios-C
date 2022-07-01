/*
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno.
Se deben implementar las siguientes funciones:

void cargar(float sueldos[4])
..
float gastosTurno(float sueldos[4])
..

https://www.youtube.com/watch?v=5HYKXZvrqjs&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=107
*/
#include <stdio.h>

void cargar(float sueldos[4]) //Funcion que cargará los sueldos
{
    for (int i = 0; i < 4; i++){
        printf("Ingrese el sueldo: $");
        scanf("%f",&sueldos[i]);
    }
}


float gastosTurno(float sueldos[4]) //Funcion que sumará todoslos sueldos de los empleados
{
    float contador=0;

    for (int i = 0; i < 4; i++){
        contador += sueldos[i];
    }

    return contador;
}


int main() //Funcion principal
{
    float sueldosMa[4];
    float sueldosTar[4];

    printf("Carga de sueldos del turno manana\n");
    cargar(sueldosMa);
    printf("Carga de sueldos del turno tarde\n");
    cargar(sueldosTar);

    printf("Gastos del turno de la manana: $%0.2f\n", gastosTurno(sueldosMa));
    printf("Gastos del turno de la tarde: $%0.2f", gastosTurno(sueldosTar));

    return 0;
}