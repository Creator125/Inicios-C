/* Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.

Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. 
Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar. 

https://www.youtube.com/watch?v=Y5KVqhzGL0g&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=50 */

#include <stdio.h>

int main()
{
    int i,coord_x,coord_y,n,c1=0,c2=0,c3=0,c4=0;

    printf("Cantidad de puntos a procesar: ");
    scanf("%i",&n); //Caantidad de cordenadas a procesar

    for (i = 1; i <= n; i++){
        //Punto 'x'
    printf("(%i).Ingrese la coordenada 'x': ",i);
    scanf("%i",&coord_x);
    //Punto 'y'
    printf("(%i).Ingrese la coordenada 'y': ",i);
    scanf("%i",&coord_y);

    if((coord_x < 0) && (coord_y > 0)){ //Verificando al posicion de los numeros ingresados
        c1++; //Contado los valores del caudrante 1
    }else if ((coord_x > 0) && (coord_y > 0)){
        c2++; //Contado los valores del caudrante 2
    }else if ((coord_x < 0) && (coord_y < 0)){
        c3++; //Contado los valores del caudrante 3
    }else if((coord_x > 0) && (coord_x < 0)){
        c4++; //Contado los valores del caudrante 4
    }

    printf("\n"); //Linea en blanco
    }
    
    //Imprimiendo la cantidad por cada cuadrante
    printf("Cantidad de valores ubicadas en el cuadrante 1: %i\n",c1);
    printf("Cantidad de valores ubicadas en el cuadrante 2: %i\n",c2);
    printf("Cantidad de valores ubicadas en el cuadrante 3: %i\n",c3);
    printf("Cantidad de valores ubicadas en el cuadrante 4: %i\n",c4);

    return 0;
}