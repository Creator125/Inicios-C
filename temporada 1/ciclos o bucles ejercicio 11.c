//Ejercicio 11: Suma de factoriales

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,n,factorial=1,suma_f=0;

    printf("Ingrese un numero: "); scanf("%i",&n);

    for (i = 1; i <= n; i++){ //Multiplicando el bucle

        factorial *= i; //Cuando aumente se va a multipilcar en numero por el siguente
        suma_f += factorial; //Sumando los factoriales
    }

    printf("La suma del factorial es: %i",suma_f); //Imprienido el factorial del numero

    return 0;
}
