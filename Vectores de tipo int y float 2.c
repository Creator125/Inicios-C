/*
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno 
(definir los dos vectores con componentes de tipo float)

Imprimir los gastos en sueldos de cada turno.

https://www.youtube.com/watch?v=Od-ukuhJ7tY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=60
*/
#include <stdio.h>

int main()
{
    float turno_dia[4],turno_tarde[4],gasto_dia=0,gasto_tarde=0;
    int i;
    
    printf("\tTurno de la mañana\n");
    for (i = 0; i < 4; i++){ //Turno de la mañana
        printf("Ingrese el sueldo del empleado: $");
        scanf("%f",&turno_dia[i]);

        gasto_dia += turno_dia[i]; //Sumando los saldos del turno de la mañana
    }
    printf("\n"); //Linea en blanco
    printf("\tTurno de la tarde\n");
    for (i = 0; i < 4; i++){ //Turno de la tarde
        printf("Ingrese el sueldo del empleado: $");
        scanf("%f",&turno_tarde[i]);

        gasto_tarde += turno_tarde[i];//Sumando los saldos del turno de la tarde
    }
    printf("\n"); //Linea en blanco
    printf("Gastos total de sueldos de la mañana: %.3f\n",gasto_dia);
    printf("Gastos total de sueldos de la tarde: %.3f",gasto_tarde);

    return 0;
}