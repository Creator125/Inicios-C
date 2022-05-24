/*Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, 
imprimir en pantalla la leyenda "Alguno de los números es menor a diez". 

https://www.youtube.com/watch?v=onJLnAwanv8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=25 */

#include <stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&num1,&num2,&num3);

    if ((num1 < 10) || (num2 < 10) || (num3 < 10)){ //Verificando si uno de los tre numeros son menores que 10
        printf("\nAlguno de los numeros es menor a diez\n");

    }
    

    return 0;
}
