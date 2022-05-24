//Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad

//https://www.youtube.com/watch?v=V1lKZjzk5xU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=22

#include <stdio.h>

int main(int argc, char const *argv[])
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

    if (month == 12 && day == 25){ //Verificando si la fecha corresponde al mes 12 (Dicienbre) y el dia 25 que es el dia donde comienza la navidad
        printf("\nLa fecha corresponde a navidad\n");
    }


    return 0;
}
