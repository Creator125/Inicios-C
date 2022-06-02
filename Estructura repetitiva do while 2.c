/* 
Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:

a) ¿Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, ¿Cuántas con más de 10.2 Kg.? y ¿Cuántas con menos de 9.8 Kg.?
b) La cantidad total de piezas procesadas. 

https://www.youtube.com/watch?v=-jcrzPDf2Qk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=55
*/

#include <stdio.h>

int main()
{
    float peso_kg;
    int cont1=0,cont2=0,cont3=0,suma;

    do{
        printf("Ingrese el peso de la pieza: ");
        scanf("%f",&peso_kg);

        if (peso_kg > 10.2){ //Contando las piezas con pesos mayores a 10.2
            cont1++;
        }else if (peso_kg < 9.8){ //Contando las piezas con pesos menores a 9.8
            cont2++;
        }else{ //Contando las piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.
            cont3++;
        }
    } while (peso_kg != 0);

    suma = cont1 + cont2 + cont3; //Obteniendo el total de datos ingresados

    printf("\nPiezas mayor a 10.2kg: %i\n",cont1);
    printf("Piezas que pesa entre 10.2kg y 9.8kg: %i\n",cont3);
    printf("Piezas menor a 9.8kg: %i\n",cont2);
    printf("\nCantidad total de piezas: %i\n",suma);
    
    return 0;
}