//Ejercicio 4: Determinar si un número es par, impar

#include <stdio.h>

int main()
{
    int num,modulo;

    printf("Ingrese un numero: ");
    scanf("%i", &num); //Pidiendo el numero del usuario

    //Definiendo el modulo
    modulo = num % 2;

    //Verificando si el numero es par
    if (modulo == 0)
    {
        puts("El nuemro es par");
    }
    

    return 0;
}
