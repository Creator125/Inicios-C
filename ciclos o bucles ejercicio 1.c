//Ejercicio 1: Suma de los n primeros números

#include <stdio.h>

int main()
{
    int n,i,suma=0;

    //La cantidad de numero a sumar (n)
    printf("Ingrese el total de numero a sumar: ");
    scanf("%i",&n);

    i = 1; //El iterador iniciará con 1 como valor

    while (i<=n){ //Contará hasta n
        suma += i; //La variable que almacenara la suma total del recorido de 'i'
        i++;
    }
    
    //Imprimiendo la suma total
    printf("Suma total: %i",suma);

    return 0;
}
