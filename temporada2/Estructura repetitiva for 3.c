/*Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5.
 Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.

https://www.youtube.com/watch?v=1Ix6ORHMd2g&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=43 */

#include <stdio.h>

int main()
{
    int n,mult3=0,mult5=0,i;

    for (i = 1; i <= 10; i++){
        printf("(%i).Ingrese un numero: ",i);
        scanf("%i",&n);

        if (n % 3 == 0){ //Cotando los multiplos de 3
            mult3++;
        }
        if (n % 5 == 0){ //Contando los multiplos de 5
            mult5++;
        }
    }
    
    printf("\nMultiplos de 3: %i \nMultiplos de 5: %i\n",mult3,mult5);

    return 0;
}
