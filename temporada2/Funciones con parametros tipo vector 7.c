/*
Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
1-Realizar la carga de las notas.
2-Mostrar el nombre del curso que obtuvo el mayor promedio general. 

https://www.youtube.com/watch?v=0eb6PntHCC8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=109
*/
#include <stdio.h>

void cargar(int vector[5]) //Funcion que cargará las notas
{
    for (int i = 0; i < 5; i++){
        printf("Ingrese una nota: ");
        scanf("%i",&vector[i]);
    }
}


int promedio(int vector[5]) //Funcion que retornará el promedio
{
    int suma=0,prom;

    for (int i = 0; i < 5; i++){
        suma += vector[i];
    }

    prom = suma / 5;

    return prom;
}


int main() //Funcion principal
{
    int cursoA[5],cursoB[5];

    printf("Notas del curso A\n"); //cargando las notas de cada curso
    cargar(cursoA);
    printf("Notas del curso B\n");
    cargar(cursoB);

    if (promedio(cursoA) > promedio(cursoB)){ //Verificando el curso con mayor promedio
        printf("\nEl curso con mayor promedio es el curso A con %i\n",promedio(cursoA));

    }else if (promedio(cursoB) > promedio(cursoA)){
        printf("\nEl curso con mayor promedio es el curso B con %i\n",promedio(cursoB));

    }else{
        printf("\nAmbos cursos tiene el mismo promedio general\n");
    }

    return 0;
}
