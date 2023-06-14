//Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.

//https://www.youtube.com/watch?v=J-_ARY3Hhwc&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=34

#include <stdio.h>

int main()
{
    int n,i=1;
    float altura,promedio,cont_altura=0;

    printf("Numero de personas a procesar: ");
    scanf("%i",&n); //Cojuntos de altura

    while (i <= n){ //Contará hasta el numero de conjunto ingresado (n)
        printf("Ingrese la altura %i: ",i);
        scanf("%f",&altura); //Altura ingresada

        cont_altura += 1; //Contador de altura
        i++;
    }
    
    promedio = cont_altura / n;  //Altura promendio

    printf("\nAltura promedio: %.2f",promedio);

    return 0;
}
