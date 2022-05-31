//Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)

//https://www.youtube.com/watch?v=pDJlado2fMjBVE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=47

#include <stdio.h>

int main()
{
    int producto,i;

    for (i = 5; i <= 50; i++){ //Contador del 5 al 50
        producto = i * 5; //El producto de la tabla (El reusultado de la multiplicacion)

        printf("5 x %i = %i\n",i,producto);
    }

    return 0;
}