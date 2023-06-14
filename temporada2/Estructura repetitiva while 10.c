/* Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
Emplear el operador “%” en la condición de la estructura condicional (este operador retorna el resto de la división de dos valores,
 por ejemplo 11%2 retorna un 1):

	if (valor%2==0)         //Si el if da verdadero luego es par.

https://www.youtube.com/watch?v=cF-rf2FCfBA&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=40 */

#include <stdio.h>

int main()
{
    int n,pares=0,impares=0,i=1,num;

    printf("Cuantos numeros deseas ingresar: ");
    scanf("%i",&n);

    while (i <= n){ //Contará hasta n
        printf("(%i) Ingrese un numero: ",i);
        scanf("%i",&num);

        if (i % 2 == 0){//Numeros pares
            pares += 1;
        }else{ //Numeros impares
            impares += 1;
        }

        i++; 
    }
    
    //Imprimiendo los resultados
    printf("\nNumeros pares: %i \nNumeros impares: %i\n",pares,impares);

    return 0;
}
