//Ejercicio 2: Comprobar si un numero digitado por el usuario es positivo o negativo

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num); //Pidiendo el numero del usuario

    //Verifcando si el numero es negativo o psitivo
    if (num > -1)
    {
        //Positivo
        printf("El numero es positivo");
    }else{
        //Negativo
        printf("El numero es negativo");
    }
    

    return 0;
}
