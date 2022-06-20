//Confeccionar una función que defina dos parámetros enteros y nos retorne el mayor.

//https://www.youtube.com/watch?v=NaKUJOoM2HA&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=98

#include <stdio.h>

int retornarMayor(int a, int b) //La funcion que retornará un numero mayor
{
    int mayor;

    if (a > b){
        mayor = a;
    }else{
        mayor = b;
    }

    return mayor; //Retornando el numero mayor
}


int main() //Funcion principal
{
    int num1,num2;

    printf("Ingrese dos numeros: ");
    scanf("%i %i",&num1,&num2);

    printf("\nEl numero mayor es %i\n",retornarMayor(num1,num2));

    return 0;
}
