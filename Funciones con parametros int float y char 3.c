/*
Desarrollar una función que reciba como parámetro un caracter. Si llega una 'h' mostrar por 
pantalla el mensaje "hombre", si llega una 'm' mostrar el mensaje "mujer".

Llamar desde la función main pasando una vez una 'h' y otra vez una 'm'.

https://www.youtube.com/watch?v=9skp3WWbswM&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=93
*/
#include <stdio.h>

void verificarCaracter(char caracter) //La funcion que verifiacará el caracter ingresado en la funcion main()
{
    if (caracter == 'h'){
        printf("Hombre\n");
    }else if (caracter == 'm'){
        printf("Mujer\n");
    }
}

int main()
{
    verificarCaracter('h'); //Hombre
    verificarCaracter('m'); //Mujer

    return 0;
}
