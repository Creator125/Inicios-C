/* Escribir un programa que solicite la carga de números por teclado, obtener su promedio. 
Finalizar la carga de valores cuando se ingrese el valor 0.

Cuando la finalización depende de algún valor ingresado por el operador conviene el empleo de la estructura do while, 
por lo menos se cargará un valor (en el caso más extremo se carga 0, que indica la finalización de la carga de valores)

https://www.youtube.com/watch?v=Hc2rejBlWhQ&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=55 */

#include <stdio.h>

int main()
{
    int cantidad=0,suma=0,promedio,valor;

    do{
        printf("Ingrese un numero (0 para finalizar): ");
        scanf("%i",&valor);

        if (valor != 0){ //Omitiendo el 0 
            suma += valor; //Obteniedo la suma de los valores ingresado
            cantidad++; //Contado los numeros ingresados
        }
    } while (valor != 0);

    if (cantidad != 0){
        promedio = suma / cantidad; //Obteniendo el promedio

        printf("\nPromedio total: %i\n",promedio);
    }else{
        printf("\nNo se ingresaro numeros");
    }
    
    return 0;
}
