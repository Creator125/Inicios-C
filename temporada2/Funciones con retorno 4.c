/*
Confeccionar una función que calcule la superficie de un rectángulo y la retorne, la función recibe como parámetros los 
valores de dos de sus lados:

int retornarSuperficie(int lado1,int lado2)

En la función main del programa cargar los lados de dos rectángulos y luego mostrar cual de los dos tiene una superficie mayor. 

https://www.youtube.com/watch?v=AcxqoYoLw_I&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=101
*/

#include <stdio.h>

int retornarSuperficie(int lado1,int lado2) //La funcion que retornará la superficie mayor
{
    int superficie = lado1 * lado2;

    return superficie;
    
}

int main() //Funcion principal
{
    int l1,l2,l3,l4;

    printf("Primer rectangulo\n");
    printf("Ingrese el lado mayor del rectangulo: ");
    scanf("%i",&l1);
    printf("Ingrese el lado menor del rectangulo: ");
    scanf("%i",&l2);
    printf("segundo rectangulo\n");
    printf("Ingrese el lado mayor del rectangulo: ");
    scanf("%i",&l3);
    printf("Ingrese el lado menor del rectangulo: ");
    scanf("%i",&l4);

    if (retornarSuperficie(l1,l2) == retornarSuperficie(l3,l4)){ //Vericancando el rectangulo con mayor superficie
        printf("\nLos rectangulos tienen superficies iguales\n");
    }else if (retornarSuperficie(l1,l2) > retornarSuperficie(l3,l4)){
        printf("\nEl primer rectangulo tiene mayor superficie\n");
    }else{
        printf("\nEl segundo rectangulo tiene mayor superficie\n");
    }

    return 0;
}
