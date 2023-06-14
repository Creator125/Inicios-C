//Permitir el ingreso de una palabra en minúsculas por teclado. Cambiar todas las vocales por un caracter de guión: '-'.

//https://www.youtube.com/watch?v=KmIcb3ir74s&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=77

#include <stdio.h>

int main()
{
    char palabra[40];
    int i=0;

    printf("Ingrese un palabra (en minuscula): ");
    gets(palabra);

    while (palabra[i] != '\0'){ //Recoriendo los carateres de la palabra ingresada
        //Reprazando la vocal el caracter por ( - )
        if ((palabra[i] == 'a') || (palabra[i] == 'e') || (palabra[i] == 'i') || (palabra[i] == 'o') || (palabra[i] == 'u')){
            palabra[i] = '-'; 
        }

        i++;
    }

    printf("\nResultado de modificacion: %s\n",palabra);

    return 0;
}
