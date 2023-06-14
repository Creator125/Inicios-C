/*
Desarrollar un programa con dos funciones aparte de la main. 

La primer solicite el ingreso de un entero y muestre el cuadrado de dicho valor. 
La segunda que solicite la carga de dos valores y muestre el producto de los mismos.

Llamar desde la main a ambas funciones.

https://www.youtube.com/watch?v=E1w4qkn9xTk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=88
*/
#include <stdio.h>

void cuadrado() //La funcion que realiza realiza elcuadradode un numero
{
    int num,cuadrado;

    printf("Ingrese un numero para conseguir el cuadrado: ");
    scanf("%i",&num);

    cuadrado = num * 2;

    printf("\nCuadrado del numero: %i\n",cuadrado);
}

void separador() //La funcion que imprime una linea separadora
{
    printf("\n______________________________\n\n");
}

void cargarProducto() //Funcion que cargará los dos valores para multpilicacion
{
    int var1,var2,producto;

    printf("Ingrese dos numeros para el producto: ");
    scanf("%i %i",&var1,&var2);

    producto = var1 * var2;

    printf("\nProducto: %i\n",producto);
}

int main() //La función principal
{
    printf("Hallar el cuadrado de un numero\n");
    cuadrado();

    separador();

    printf("Producto de numeros\n");
    cargarProducto();

    return 0;
}