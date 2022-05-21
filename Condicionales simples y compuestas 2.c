//Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".

//https://www.youtube.com/watch?v=Hj_j7wluMbQ&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=13

#include <stdio.h>

int main()
{
    int nota1,nota2,nota3,promedio;

    printf("Ingrese sus tres calificaciones: ");
    scanf("%i %i %i",&nota1,&nota2,&nota3); //El usuaraio ingresa us tres calificaciones

    promedio = (nota1 + nota2 + nota3) / 3; //Hallando el promedio de las tres notas

    if (promedio >= 7){ //Verificando si el promedio es mayor a 7
        printf("\nPromocionado\n");
    }
    
    return 0;
}