/*Ejercicio 10: Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. 
Dicha calificación se compone de los siguientes porcentajes:

• 55% del promedio de sus tres calificaciones parciales.
• 30% de la calificación del examen final.
• 15% de la calificación de un trabajo final.*/

#include <stdio.h>

int main(){
    //Definiendo las variables:
    //Nota y promedio de las paciales
    float nota1,nota2,nota3,promedio_parciales;
    //Calificacion del examen, trabajo y calificacion final
    float examen_final,trabajo_final,calificacion_final;


    //Estradas y salidas de datos
    printf("Ingrese sus tres calificaciones de parciales: ");   scanf("%f %f %f",&nota1,&nota2,&nota3);
    printf("Ingrese la calificacion del examen final: ");   scanf("%f",&examen_final);
    printf("Ingrese la calificacion de un trabajo final: ");    scanf("%f",&trabajo_final);

    //Realizando las operaciones
    promedio_parciales = ((nota1 + nota2 + nota3) / 3) * 0.55;
    examen_final = examen_final * 0.3;
    trabajo_final = trabajo_final * 0.15;
    //Realizando el promedio final
    calificacion_final = (promedio_parciales + examen_final + trabajo_final) / 3;

    //Imprimiendo el resultados
    printf("La calificacion final del estudiante en la materia de algoritmo es: %.2f",calificacion_final);

    return 0;
}
