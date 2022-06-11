/*
Ingresar por teclado una oración de hasta 200 caracteres. Se sabe que el operador ingresa solo un caracter en blanco entre palabras. 
Imprimir por pantalla la cantidad de palabras que tiene la oración.

https://www.youtube.com/watch?v=hy_QW0f4ZYU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=75
*/
#include <stdio.h>

int main()
{
    char oracion[201];
    int i=0,cont_espacios=0;

    printf("Ingrese una oracion: \n");
    gets(oracion);

    while (oracion[i] != '\0'){
       if (oracion[i] == ' '){ //Contando los espacios en blanco
           cont_espacios++;
       }

       i++;   
    }

    int palabras = cont_espacios + 1; //sumando esa cantidad de espacios +1 para contar la cantidad de palabras
    
    printf("Cantidad de palabras: %i",palabras);

    return 0;
}
