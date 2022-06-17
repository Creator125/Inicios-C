/*
Desarrollar una función que reciba como parámetro un caracter. La función debe mostrar un mensaje si es una vocal o no es una vocal. 
Debe funcionar tanto con mayúsculas y minúsculas.

https://www.youtube.com/watch?v=mxgeOE_rO6M&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=96
*/
#include <stdio.h>

void verificarVocal(char vocal) //La funcion que verificará si el caracter es una vocal
{
    if ((vocal == 'a') || (vocal == 'e') || (vocal == 'i') || (vocal == 'o') || (vocal == 'u')){
        printf("\nEl caracter ingresado es una vocal.\n");
    }else if ((vocal == 'A') || (vocal == 'E') || (vocal == 'I') || (vocal == 'O') || (vocal == 'U')){
        printf("\nEl caracter ingresado es una vocal.\n");
    }else{
        printf("\nEl caracter ingresado no es una vocal.\n");
    }
    
}


int main() //Funcion principal
{
    char letra;

    printf("Ingrese un caracter: ");
    scanf(" %c",&letra);
    
    verificarVocal(letra); //Verificando si el caracter ingresado si es o no una vocal
    
    return 0;
}
