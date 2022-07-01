/*
Confeccionar dos funciones:
1-Permita ingresar por teclado una palabra en un vector de caracteres que llega como parámetro.
2-Retornar la cantidad de vocales que tiene la palabra.

https://www.youtube.com/watch?v=qHujs5fNS6w&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=105
*/
#include <stdio.h>

void cargarPalabra(char palabra[20]) //La funcion para cargar una palabra
{
    printf("Ingrese una palabra: ");
    gets(palabra);
}

int contarVocales(char palabra[20]) //La funcion que contará los vocales de la palabra
{
    int contador=0,i=0;

    while (palabra[i] != '\0'){
        if ((palabra[i] == 'a') || (palabra[i] == 'e') || (palabra[i] == 'i') || (palabra[i] == 'o') || (palabra[i] == 'u')){
            contador++;
        }

        i++;
    }
    
    return contador;
}


int main()
{
    char pala[20];

    cargarPalabra(pala); //Cargando la pablabra

    printf("La pababra %s tiene %i vocales",pala,contarVocales(pala));

    return 0;
}
