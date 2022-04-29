//Ejercicio 9: Determinar si un Número es Primo o no

#include <stdio.h>

int main()
{
    int i,numero,contador = 0;

    printf("Ingrese un numero: "); scanf("%i",&numero);

    for ( i = 1; i < numero; i++){
        if (numero % i == 0){//Comprobando el tipo de numero
            contador++;
        }  
    }

    if (contador > 2){ //Numero compuesto
        printf("\nEl numero es compuesto");
    }else{ //Numero primo
        printf("\nEl numero es primo");
    }
    
    return 0;
}
