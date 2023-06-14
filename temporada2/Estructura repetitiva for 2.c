/*Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.

Para resolver este problema se requieren tres contadores:

aprobados (Cuenta la cantidad de alumnos aprobados)
reprobados (Cuenta la cantidad de reprobados)
f (es el contador del for)

Dentro de la estructura repetitiva debemos hacer la carga de la variable nota y verificar con una estructura 
condicional si el contenido de la variable nota es mayor o igual a 7 para incrementar el contador aprobados, 
en caso de que la condición retorne falso debemos incrementar la variable reprobados.

https://www.youtube.com/watch?v=RPxrHeYLa2g&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=42 */

#include <stdio.h>

int main()
{
    int aprobados=0,reprobados=0,f,nota;

    for (f = 1; f <= 10; f++){ //Repetirá 10 veces
        printf("Ingrese la nota (%i): ",f);
        scanf("%i",&nota); //Se espra la nota por el usuario

        if (nota >= 7){ //Contando las notas aprobadas
            aprobados += 1;
        }else{ //Contando las notas reprobadas
            reprobados += 1;
        }
    }
    
    printf("\nNotas aprobadas: %i \nNotas reprobadas: %i\n",aprobados,reprobados);

    return 0;
}