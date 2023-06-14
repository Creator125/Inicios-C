//Ingresar por teclado una palabra en minúsculas. Mostrar por pantalla la cantidad de vocales que tienen dicha palabra

//https://www.youtube.com/watch?v=1QZ8O4icH50&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=73

#include <stdio.h>

int main()
{
    char palabra[30];
    int i=0,cantidad=0;

    printf("Ingrese un palabra (en minuscula): ");
    gets(palabra);

    while (palabra[i] != '\0'){ //Recoriendo los carateres de la palabra ingresada
        if ((palabra[i] == 'a') || (palabra[i] == 'e') || (palabra[i] == 'i') || (palabra[i] == 'o') || (palabra[i] == 'u')){
            cantidad++; //Contado los calaracteres que son vocales
        }

        i++;
    }
    
    printf("\nCantidad de vocales que tiene la palabra %s: %i\n",palabra,cantidad);
    
    return 0;
}
