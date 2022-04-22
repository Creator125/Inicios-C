/*
Ejercicio 11: Dada una nota de un examen mediante un código escribir el literal que le corresponde a la nota.

A - Excelente
B - Notable
C - Aprobado
D y F - Reprobado 
*/

#include <stdio.h>

int main()
{
    char nota;

    //Piediendo la nota al usuario
    printf("Ingrese tu nota: ");
    scanf("%c",&nota);

    switch (nota){
    case 'A':
        //Excelente
        printf("\nExelente");
        break;

    case 'B':
        //Notable
        printf("\nNotable");
        break;
    
    case 'C':
        //Aprobado
        printf("\nAprobado");
        break;

    case 'D':
    case 'F':
        //Reprobado
        printf("\nReprobado");
        break;
    
    default:
        //No se eligion ninguna de las opciones
        printf("\nNo existe esa nota");
    }


    return 0;
}
