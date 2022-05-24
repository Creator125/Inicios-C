/*Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año 
(enero, febrero o marzo) Cargar por teclado el valor numérico del día, mes y año.
Ejemplo: dia:10 mes:2 año:2017. */

//https://www.youtube.com/watch?v=o-BPu_zkatE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=21

#include <stdio.h>

int main()
{
    int day,month,year;

    //Día
    printf("Ingrese el dia (en numero): ");
    scanf("%i",&day);
    //Mes
    printf("Ingrese el mes (en numero): ");
    scanf("%i",&month);
    //Año
    printf("Ingrese el año (en numero): ");
    scanf("%i",&year);

    if (month == 1 || month == 2 || month == 3){ //Lo que importa es el més, pero se verificará solo el trimestre
        printf("\nLa fecha corresponde al primer trimestre\n");
        printf("%i/%i/%i\n",day,month,year);
    }
    

    return 0;
}