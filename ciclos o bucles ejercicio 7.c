//Ejercicio 7: Suma de los 10 primeros números pares

#include <stdio.h>

int main()
{
    int i,suma=0;

    for (i = 0; i <= 10; i += 2){//Filtrando los numeros pares
            printf("%i\n",i);
            suma += i; 
    }
    
    printf("Resultado de la suma: %i",suma);//Imprimiendo la suma obtenida

    return 0;
}
