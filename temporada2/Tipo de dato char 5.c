/*
Realizar la carga de valores enteros por teclado y sumarlos. Cada vez que se carga un valor 
pedir al operador que ingrese si quiere cargar otro valor ingresando una 's' o 'S' (minúscula o mayúscula)

https://www.youtube.com/watch?v=7YauR6oELIQ&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=70
*/
#include <stdio.h>

int main()
{
    int num,suma=0;
    char carcter;

     do{
        printf("Ingrese un numero: ");
        scanf("%i",&num);
        printf("Deseas ingresar otro numero: 's' (Si) o 'n' (No).\n");
        scanf(" %c",&carcter); //Piendiendo el caracter para seguir ingresando o serra para mostrar la suma

        suma += num; //Acumulando
    } while (carcter == 's' || carcter == 'S'); //El bucle continua si el caracter ingresado es 's' o 'S'

    printf("\nSuma total de los valores ingresados: %i\n",suma);

    return 0;
}