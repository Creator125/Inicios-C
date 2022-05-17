//Ejercicio 10: Factorial de un numero.

/* El factoral es cantidad que resulta de la multiplicación de determinado número natural por todos 
los números naturales que le anteceden*/
#include <stdio.h>

int main()
{
    int i,n,factorial=1;

    printf("Ingrese un numero: "); scanf("%i",&n);

    for (i = 1; i <= n; i++){ //Multiplicando el bucle

        factorial *= i; //Cuando aumente se va a multipilcar en numero por el siguente
    }
    printf("El factorial es de %i es: %i",n,factorial); //Imprienido el factorial del numero
    
    return 0;
}
