//Ingresar por teclado dos nombres de personas y luego mostrarlas primero el que tiene más caracteres y luego el que tiene menos

//https://www.youtube.com/watch?v=GpJRNfQQ1QE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=84

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nombre1[20],nombre2[20];

    printf("Ingrese el nombre de la primera persona: "); //nombre 1
    gets(nombre1);
    printf("Ingrese el nombre de la segunda persona: "); //nombre 2
    gets(nombre2);

    if (strlen(nombre1) > strlen(nombre2)){ //Verificando con más caracteres
        printf("\n %s \n %s\n",nombre1,nombre2);
    }else{
        printf("\n %s \n %s\n",nombre2,nombre1);
    }
    
    return 0;
}