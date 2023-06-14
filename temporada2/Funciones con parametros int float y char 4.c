/*
Confeccionar una función que reciba tres enteros y nos muestre el mayor de ellos. 
La carga de los valores hacerlo por teclado en la función main.

https://www.youtube.com/watch?v=L4Rl8DtRSYA&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=94
*/
#include <stdio.h>

void mostrarMayor(int n1,int n2,int n3) //La funcion que mostrara el mayor de tres numeros ingresados
{
    if (n1 > n2 && n1 > n3){
        printf("\nEl numero mayor es %i\n",n1);
    }else if (n2 > n1 && n2 > n3){
        printf("\nEl numero mayor es %i\n",n2);
    }else if (n3 > n2 && n3 > n1){
        printf("\nEl numero mayor es %i\n",n3);
    }else{
        printf("\nLos numeros son iguales.\n");
    }
}


int main() //Funcion principal
{
    int num1,num2,num3;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&num1,&num2,&num3);

    mostrarMayor(num1,num2,num3);

    return 0;
}
