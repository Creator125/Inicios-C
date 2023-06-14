/*
Guardar los datos de 6 sueldos de empleados en un vector de tipo float. Confeccionar las siguientes funciones:
1-Carga de sueldos.
2-Impresión de los sueldos.
3-Gasto total de la empresa en sueldos.

https://www.youtube.com/watch?v=8RwCrkYR5z0&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=103
*/
#include <stdio.h>

void cagarSueldo(float sueldo[6]) //La funcion que cargará los sueldos de los empleados
{
    for (int i = 0; i < 6; i++){
        printf("Ingrese el sueldo del empleado: $");
        scanf("%f",&sueldo[i]);
    }
    
}

void imprimirSueldo(float sueldo[6]) //La funcion que imprime los sueldos
{
    printf("\nSueldo de los empleados:\n");

    for (int i = 0; i < 6; i++){
        printf("$%.2f\n",sueldo[i]);
    }
}

void gastoTotal(float sueldo[6]) //La funcion que contará el gasto total de la empresa
{
    float contador;

    for (int i = 0; i < 6; i++){
        contador += sueldo[i];
    }

    printf("\nEl gasto total de la empresa en sueldo es $%.2f\n",contador);
}

int main() //Funcion principal
{
    float pago[6];
    
    cagarSueldo(pago); //Cargando los sueldos dentro del vector
    imprimirSueldo(pago); //Imprimiendo los sueldos que están almacenado en el vector
    gastoTotal(pago); //Impriendo el gaso total de la empresa

    return 0;
}
