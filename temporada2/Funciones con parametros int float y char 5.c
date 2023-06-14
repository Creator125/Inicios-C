/*
Elaborar una función que reciba un valor entero y nos muestre desde el 1 hasta dicho valor. 
Si la función recibe un valor negativo mostrar un mensaje de error. 

https://www.youtube.com/watch?v=dtu--DhfD1g&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=95
*/
#include <stdio.h>

void contarHasta(int f) //La funcion que contará del 1 numero hasta el numero f
{
    int i=1;

    while (i <= f){
        printf("%i ",i);
        
        i++;
    }
}

int main() //Funcion principal
{
    int n;

    printf("Ingrese un numero para contar: ");
    scanf("%i",&n);

    if (n > 0){
        contarHasta(n);
    }else{
        printf("Error\n");
    }

    return 0;
}
