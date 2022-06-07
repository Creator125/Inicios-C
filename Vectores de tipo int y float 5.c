/*
Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general. 

https://www.youtube.com/watch?v=rKc8jQwvLjQ&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=63
*/
#include <stdio.h>

int main()
{
    int cursoA[5],cursoB[5],i;
    int promedioA=0,promedioB=0,sumaA=0,sumaB=0;

    printf("\tCurso A\n");
    for (i = 0; i < 5; i++){ //Curso A
        printf("Ingrese la nota: ");
        scanf("%i",&cursoA[i]);

        sumaA += cursoA[i]; //Sumatorias de las notas del curso A
    }
    printf("\n"); //Linea en blanco
    printf("\tCurso B\n");
    for (i = 0; i < 5; i++){ //Curso B
        printf("Ingrese la nota: ");
        scanf("%i",&cursoB[i]);

        sumaB += cursoB[i]; //Sumatorias de las notas del curso B
    }
    promedioA = sumaA / 5; //Promedio de las notas del curso A
    promedioB = sumaB / 5; //Promedio de las notas del curso B

    printf("\nPromedio del curso A: %i\n",promedioA);
    printf("Promedio del curso B: %i\n",promedioB);
    printf("\n"); //Linea en blanco

    if (promedioA == promedioB){ //Verificando el curso con mayor promedio
        printf("Los curso tienen el mismo promedio\n");
    }else if (promedioA > promedioB){ 
        printf("Curso con mayor promedio: Curso A\n");
    }else{
        printf("Curso con mayor promedio: Curso B\n");
    }
    
    return 0;
}