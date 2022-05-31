/* Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:

a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares.

https://www.youtube.com/watch?v=lfDf3ERi22Y&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=51 */

#include <stdio.h>

int main()
{
    int i,n,cont_negativo=0,cont_positivo=0,cont_mult15=0,suma_pares=0;

    for (i = 1; i <= 10; i++){
        printf("(%i).Ingrese un numero: ",i);
        scanf("%i",&n);

        if (n > 0){ //Contando los numeros positivos
            cont_positivo++;
        }else if (n < 0){ //Contando los numeros negativos
            cont_negativo++;
        }
        if (n % 15 == 0){ //Contando los multiplos de 15
            cont_mult15++;
        }
        if (n % 2 == 0){ //El valor acumulado de los números ingresados que son pares
            suma_pares += n;
        }  
    }
    
    printf("\nNumeros positivos: %i\n",cont_positivo);
    printf("Numeros negativos: %i\n",cont_negativo);
    printf("Multiplos de 15: %i\n",cont_mult15);
    printf("Suma total de los numeros pares: %i\n",suma_pares);

    return 0;
}