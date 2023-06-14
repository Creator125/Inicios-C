/*Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo 
y a este resultado se lo multiplica por el tercero.

https://www.youtube.com/watch?v=rCSa5Wonf38&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=23 */

#include <stdio.h>

int main()
{
    int num1,num2,num3,suma,multi;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&num1,&num2,&num3);

    if (num1 == num2 && num2 == num3){
        suma = num1 + num2; //Realizando la suma
        multi = suma * num3; //Multiplicando la suma por el tecer numero (num3)

        printf("\nSuma del primer y segundo numero: %i\n",suma);
        printf("Multiplicacion de los tres numeros: %i\n",multi);

    }
    

    return 0;
}