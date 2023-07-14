/*
Se tiene la siguiente información:
· Nombres de 4 empleados (matriz de tipo char)
· Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses (matriz de tipo float)
Confeccionar el programa para:
a) Realizar la carga de la información mencionada.
b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
Utilizar macros para definir la cantidad de CANTEMPLEADOS y MESES de las estructuras de datos.

Imangen de referencia: https://www.tutorialesprogramacionya.com/cya/imagentema/foto056.jpg

https://www.youtube.com/watch?v=NvSJNXXJgdE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=131
*/

#include <stdio.h>
#include <string.h>

#define CANTEMPLEADOS 4 //Cantidad de empleados
#define MESES 3 //Meses

void cargarDatos(char empleados[CANTEMPLEADOS][40], float sueldos[CANTEMPLEADOS][MESES]){

  for (int f = 0; f < CANTEMPLEADOS; f++){ //Ingresando los datos
    printf("Ingrese el nombre del empleado: ");
    gets(empleados[f]);

    for (int c = 0; c < MESES; c++){ //Ingresando los sueldos del empleado
        printf("Ingrese el sueldo del empleado: $");
        scanf("%f",&sueldos[f][c]);
    }
    printf("\n");

    fflush(stdin);
  }
}


void calcularSueldoTotal(float sueldos[CANTEMPLEADOS][MESES], float sueldototal[CANTEMPLEADOS]){ //Funcion para generar la matriz que obtendrá el sueldo total de cada empleado
    for (int f = 0; f < CANTEMPLEADOS; f++){
        float suma = 0;

        for (int c = 0; c < MESES; c++){
            suma += sueldos[f][c]; //Sumando todos los sueldos totales de cada empleados
        }
        sueldototal[f] = suma; //Asignando el valor sumado al sueldo total
    }
}


void imprimirPagos(char empleados[CANTEMPLEADOS][40], float sueldototal[CANTEMPLEADOS]){
    printf("El total pagado en sueldos en los ultimos 3 meses.\n");

    for (int f = 0; f < CANTEMPLEADOS; f++){
        printf("%s: $%.2f\n",empleados[f],sueldototal[f]);
    }
}


void empleadoConMayorIngreso(char empleados[CANTEMPLEADOS][40], float sueldototal[CANTEMPLEADOS]){
    char empleadomayor[40];
    float mayor = sueldototal[0];
    strcpy(empleadomayor,empleados[0]);

    for (int f = 1; f < CANTEMPLEADOS; f++){
        if (sueldototal[f] > mayor){
            mayor = sueldototal[f];
            strcpy(empleadomayor,empleados[f]);
        }
    }

    printf("\nEl empleado con mayor ingreso es %s con %.2f\n",empleadomayor, mayor);
}


int main(){
    char empleados[CANTEMPLEADOS][40];
    float sueldos[CANTEMPLEADOS][MESES], sueldototal[CANTEMPLEADOS];

    cargarDatos(empleados,sueldos);
    calcularSueldoTotal(sueldos,sueldototal);
    imprimirPagos(empleados,sueldototal);
    empleadoConMayorIngreso(empleados,sueldototal);

    return 0;
}