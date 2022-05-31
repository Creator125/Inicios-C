//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados. 

//https://www.youtube.com/watch?v=K3M3kt1AFl8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=46

#include <stdio.h>

int main()
{
    int nums,sumar5=0,i;

    for (i = 1; i <= 10; i++){
        printf("(%i) Ingrese un numero: ",i);
        scanf("%i",&nums);

        if (i >= 5){ //Acumulando los 5 ultimos valores
            sumar5 += nums;
        }
    }
    
    printf("Suma total: %i",sumar5);

    return 0;
}
