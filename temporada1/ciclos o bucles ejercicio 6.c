//Ejercicio 6: Sumar pares desde n hasta m 

#include <stdio.h>

int main()
{
    int n,m,i,suma=0;

    printf("Ingrese el valor de n: "); //Valor de n
    scanf("%i",&n);
    printf("\nIngrese el valor de m: "); //Valor de m
    scanf("%i",&m);

    i = n;

    while (i <= m){
        if (i % 2 == 0){ //Filtrando los numeros pares
            suma += i; //Acumulando la suma total de los numeros pares
        }

        i++;
    }

    printf("Resultado de la suma: %i",suma);
    return 0;
}
