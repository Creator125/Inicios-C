/* En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa 
que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y 
cuántos cobran más de $300. Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.

https://www.youtube.com/watch?v=7wtqSXLJdSM&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=35 */

#include <stdio.h>

int main()
{
    float sueldo,importe=0;
    int i=1,sueldo_empleados=0,n;
    int cont_x=0,cont_m=0;

    printf("Cantidad de empleados a precesar: ");
    scanf("%i",&n); //Catidad de empleados

    while (i <= n){ 
        printf("Sueldo del empleado %i: $",i);
        scanf("%f",&sueldo); //Sueldo del empleado ingresado

        if (sueldo >= 100 && sueldo <= 300){ //Cobran entre $100 y $300
            cont_x += 1;
        }else{ //cobran más de $300
            cont_m += 1;
        }
        
        importe += sueldo;  //Contado el valor de los sueldos ingresados
        i++;
    }

    printf("\nEmpleados que cobran entre $100 y $300: %i \nEmpleados que cobran mas de $300: %i\n",cont_x,cont_m); //Imprimiedo los empleados
    printf("\nImporte total: $%.2f",importe); //Imprimiedo el importe total por el personal

    return 0;
}
