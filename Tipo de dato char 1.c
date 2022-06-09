/* 
Confeccionar un programa que permita la carga de valores enteros por teclado. 
Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar 
al usuario si desea cargar otro valor ingresando los caracteres 's' o 'n'. Mostrar al final la suma de los valores ingresados.

https://www.youtube.com/watch?v=e9aCFvUhEcc&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=66
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
    } while (carcter == 's'); //El bucle continua si el caracter ingresado es 's'

    printf("\nSuma total de los valores ingresados: %i\n",suma);
    
    return 0;
}