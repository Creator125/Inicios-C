/*Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, 
en caso contrario informar el producto y la división del primero respecto al segundo.*/

//https://www.youtube.com/watch?v=DWl6yDRkTyo&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=12

#include <stdio.h>

int main()
{
    int n1,n2,suma,resta,multiplicacion,division;

    printf("Ingrese dos numeros: ");
    scanf("%i %i",&n1,&n2); //Pidiendo los dos numeros

    if (n1 > n2){ //Si n1 es mayor que n2
        //Solo hallamos la suma y la diferencia
        suma = n1 + n2;
        resta = n1 - n2;

        printf("\nSuma: %i \nDiferncia: %i\n");
    }else{ //De lo cotrario
        //Solo hallamos el producto y la division
        multiplicacion = n1 * n2;
        division = n1 / n2;

        printf("\nProducto: %i \nDivision: %i\n");
    }
    

    return 0;
}