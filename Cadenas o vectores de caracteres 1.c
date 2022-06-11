/*
Cargar los nombres de dos personas y sus edades. Mostrar el nombre de la persona que tiene mayor edad. 
Los nombres de las personan no superan los 20 caracteres.

https://www.youtube.com/watch?v=k3vHbJMt-2Y&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=72
*/
#include <stdio.h>

int main()
{
    char nombre1[21],nombre2[21];
    int edad1,edad2;

    printf("Ingrese el nombre de la primera persona: "); //Nombre de la primera persona
    scanf("%s",nombre1);
    printf("Ingrese la edad de la primera persona: "); //Edad de la primera persona
    scanf("%i",&edad1); 
    printf("Ingrese el nombre de la segunda persona: "); //Nombre de la segunda persona
    scanf("%s",nombre2); 
    printf("Ingrese la edad la segunda persona: "); //Edad de la segunda persona
    scanf("%i",&edad2);

    if (edad1 > edad2){ //Verificando la persona con mayor edad
        printf("\nLa persona con mayor edad es: %s\n",nombre1);
    }else{
        printf("\nLa persona con mayor edad es: %s",nombre2);
    }

    return 0;
}

/* No fue como  el video esperaba tendré en cuenta la funciones gets() y fflus()*/