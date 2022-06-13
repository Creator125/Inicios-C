//Ingresar por teclado dos nombres de personas y luego mostrarlas ordenados alfabéticamente

//https://www.youtube.com/watch?v=P0o2FKsRmTs&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=83

#include <stdio.h>
#include <string.h>

int main()
{
    char nombre1[20],nombre2[20];

    printf("Ingrese el nombre de la primera persona: "); //nombre 1
    gets(nombre1);
    printf("Ingrese el nombre de la segunda persona: "); //nombre 2
    gets(nombre2);

    if (strcmp(nombre1,nombre2)>0){ //Verificandoel nombre con más alfabetos
        printf("\nNombres ordenados alfabeticamentes: %s %s\n",nombre1,nombre2);
    }else{
        printf("\nNombres ordenados alfabeticamentes: %s %s\n",nombre2,nombre1);
    }
    
    return 0;
}
