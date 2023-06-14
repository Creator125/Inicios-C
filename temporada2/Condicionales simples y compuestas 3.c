/*Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero) */

//https://www.youtube.com/watch?v=lYIzm5It-ZU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=14

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero entre 1 al 99: ");
    scanf("%i",&num);

    if (num >= 10){ //Verificando si el numero tiene un digito
        printf("\nEl numero tiene dos digito\n");
    }else{ //Verificando si el numero tiene dos digito
        printf("\nEl numero tiene un digito\n");
    }
    
    return 0;
}