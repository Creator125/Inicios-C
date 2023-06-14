//Ingresar una palabra por teclado. Mostrar por pantalla la palabra y la cantidad de caracteres que tiene dicha palabra.

//https://www.youtube.com/watch?v=qEwaz_bkBlY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=74

#include <stdio.h>

int main()
{
    char palabra[40];
    int cont=0;

    printf("Ingrese un palabra: ");
    gets(palabra);

    while (palabra[cont] != '\0'){ //Contando los caractres
        cont++;
    }

    printf("Cantidad de caracteres de la palabra %s: %i",palabra,cont);

    return 0;
}
