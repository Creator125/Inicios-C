/*Escribir un programa en el cual se ingresen cuatro números, calcular e 
informar la suma de los dos primeros y el producto del tercero y el cuarto.*/

//https://www.youtube.com/watch?v=XbdQrP-7bIk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=7

#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,suma,producto;

    printf("Ingrese cuatro numeros: ");
    scanf("%i %i %i %i",&n1,&n2,&n3,&n4);//Pidiendo los cuanto numeros

    suma = n1 + n2; //Suma del primer y segundo numero
    producto = n3 * n4; //Producto del tercer y cuarto numero

    printf("Suma de los dos primeros valores: %i \nProducto de tercer y cuarto valor: %i\n",suma,producto); //Imprimiendo la suma y el producto

    return 0;
}
