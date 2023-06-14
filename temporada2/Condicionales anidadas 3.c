/* Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje 
indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor. */

//https://www.youtube.com/watch?v=KFsCWGvSYJw&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=18

#include <stdio.h>

int main()
{
    int varl;

    printf("Ingrese un numero del 1 al 999: ");
    scanf("%i",&varl);

    if(varl > 999){ // Más de 3 cifras
        printf("\nError\n");
    }else if (varl > 99){ //3 cifras
            printf("\nEl numero ingresado tiene 3 cifras\n");
    }else if (varl > 10){ //2 cifras
            printf("\nEl numero ingresado tiene 2 cifras\n");
    }else{ // 1 cifra
            printf("\nEl numero ingresado tiene 1 cifra\n");
    }
    

    return 0;
}

/*Aunque lo hice alrevez por lo menos me acerqué demasiado*/