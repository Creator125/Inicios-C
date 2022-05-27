//Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)

//https://www.youtube.com/watch?v=ITnYsyAcYOE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=36

#include <stdio.h>

int main()
{
    int i=1,x=0;

    while (i <= 25){
        x += 11; //Sumando todos los numeros por 11, esto tambien funciona con una multiplicación.

        printf("%i ",x);

        i++;
    }
    
    return 0;
}
