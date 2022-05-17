//Ejercicio 1: Comprobar a través de un programa si un alumno aprobó o no un examen (Aprueba si su nota es mayor a 10.5).

#include <stdio.h>

int main()
{
    float nota;

    printf("Ingrese ingrese tu nota: ");
    scanf("%f", &nota); //Pidiendo la nota al ussuario

    //Verificando si la nota es mayor a 10.5
    if (nota > 10.5){
        printf("\nSi aprobaste, ¡Felicitaciones!.");
    }

    return 0;
}
