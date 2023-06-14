/*Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).
Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.) 

https://www.youtube.com/watch?v=hd6JMQwwVcE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=26 */

#include <stdio.h>

int main()
{
    int x,y;

    //Punto 'x'
    printf("Ingrese la coordenada 'x': ");
    scanf("%i",&x);
    //Punto 'y'
    printf("Ingrese la coordenada 'y': ");
    scanf("%i",&y);

    if((x < 0) && (y > 0)){ //Verificando al posicion de los numeros ingresados
        printf("\nUbicacion: cuadrante 1\n");
    }else if ((x > 0) && (y > 0)){
        printf("\nUbicacion: cuadrante 2\n");
    }else if ((x < 0) && (y < 0)){
        printf("\nUbicacion: cuadrante 3\n");
    }else if((x > 0) && (y < 0)){
        printf("\nUbicacion: cuadrante 4\n");
    }else{
        printf("\nSobre un eje\n");
    }
    

    return 0;
}
