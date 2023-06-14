/*Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, 
imprimir en pantalla la leyenda "Todos los números son menores a diez". 

https://www.youtube.com/watch?v=uOTtrKJHScg&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=24 */

#include <stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&num1,&num2,&num3);

    if ((num1 < 10) && (num2 < 10) && (num3 < 10)){ //Verificando si los tre numeros son menores que 10
        printf("\nTodos los numeros son menores a diez\n");

    }


    return 0;
}