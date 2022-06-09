/*
Confeccionar un programa que solicite la carga de dos valores enteros por teclado.
Luego solicitar que se cargue alguno de los caracteres: '+', '-', '*' o '/'.

Según el caracter ingresado proceder a mostrar la sumar, resta, multiplicación o división de los valores ingresados.

https://www.youtube.com/watch?v=hapZ7Ap1zuI&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=68
*/
#include <stdio.h>

int main()
{
    int var1,var2,resultado;
    char operador;

    printf("Ingrese dos numeros: ");
    scanf("%i %i",&var1,&var2); //Leyendo los numeros
    printf("Ingrese un operador (+, -, *, /): ");
    scanf(" %c",&operador); //Leyendo los caracteres de operadores

    if (operador == '+'){ //Realizando las operaciones de acuerdo a las operacion ingresada
        resultado = var1 + var2;
    }else if (operador == '-'){
        resultado = var1 - var2;
    }else if (operador == '*'){
        resultado = var1 * var2;
    }else if (operador == '/'){
        resultado = var1 / var2;
    }

    printf("\nResultado: %i\n",resultado);

    return 0;
}
