/*
Confeccionar un programa que solicite el pago por hora de un empleado y la 
cantidad de horas trabajadas dentro de una estructura repetitiva en la función main. 
Elaborar una función que reciba como parámetro el valor de la hora y la cantidad de horas trabajadas y nos muestre el total a pagar.

https://www.youtube.com/watch?v=STaCrFiPI4k&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=91
*/
#include <stdio.h>

void pagoTotal( float costo_sueldo, int costo_horas) //La funcion que hallará el pago total del empleados
{
    float total = costo_sueldo * costo_horas;

    printf("\nCantidad total a pagar: %.3f\n",total);
}


int main() //Funcion principal
{
    float sueldo;
    int hora;
    char opcion;

    do
    {
        printf("Ingrese el sueldo a pagar del empleado: $");
        scanf("%f",&sueldo);
        printf("Ingrese las horas: ");
        scanf("%i",&hora);

        pagoTotal(sueldo,hora); //Calculando el sueldo total del empleado

        printf("\nDeseas calcular el sueldo de otro empleado [s/n]: "); //Opcion de segir o segir calculando
        scanf(" %c",&opcion);
    } while (opcion == 's' || opcion == 'S');
    
    return 0;
}
