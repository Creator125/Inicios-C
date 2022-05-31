/* Se cuenta con la siguiente información:

Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.

a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.

https://www.youtube.com/watch?v=P2tblQu3CGk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=52 */

#include <stdio.h>

int main()
{
    int i,edad;
    int est_dia=0,est_tarde=0,est_noche=0; //Variables que contará las edades de los etudiantes en su respectiva jornada
    int prome_dia,prome_tarde,prome_noche; //Variables que obtendrá los promedios de cada jornada

    printf("\n\nTuno de la mañana\n");
    for (i = 1; i <= 5; i++){ //Las edades de 5 estudiantes del turno mañana
        printf("Ingrese la edad del estudiante %i: ",i);
        scanf("%i",&edad);

        est_dia += edad; //Obteniendo el total de edades
    }
    printf("\n\nTuno de la tarde\n");
    for (i = 1; i <= 6; i++){ //Las edades de 6 estudiantes del turno tarde
        printf("Ingrese la edad del estudiante %i: ",i);
        scanf("%i",&edad);

        est_tarde += edad; //Obteniendo el total de edades
    }
    printf("\n\nTuno de la noche\n");
    for (i = 1; i <= 11; i++){ //Las edades de 11 estudiantes del turno noche
        printf("Ingrese la edad del estudiante %i: ",i);
        scanf("%i",&edad);

        est_noche += edad; //Obteniendo el total de edades
    }

    prome_dia = est_dia / 3; //Promedio de las edades del turno de la mañana
    prome_tarde = est_tarde / 6; //Promedio de las edades del turno de la tarde
    prome_noche = est_noche / 11; //Promedio de las edades del turno de la noche

    //Imprimiendo los promedios obtenidos
    printf("\nPromedio de edades de los estudiantes de la mañana: %i\n",prome_dia);
    printf("Promedio de edades de los estudiantes de la tarde: %i\n",prome_tarde);
    printf("Promedio de edades de los estudiantes de la noche: %i\n",prome_noche);

    //Imprimendo el turno que tuvo un promedio de edades menor
    if ((prome_dia < prome_tarde) && (prome_dia < prome_noche)){
        printf("\nEl turno de la mañana tuvo un promedio menor de edades\n");
    }else if ((prome_tarde < prome_dia) && (prome_tarde < prome_noche)){
        printf("\nEl turno de la tarde tuvo un promedio menor de edades\n");
    }else{
        printf("\nEl turno de la noche tuvo un promedio menor de edades\n");
    }
    
    return 0;
}