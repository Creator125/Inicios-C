//Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.

//https://www.youtube.com/watch?v=snWHsNgXIfU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=64

#include <stdio.h>

int main()
{
    int vector[10],orden=1,i;

    for (i = 0; i < 10; i++){ //Ingresan los numeros
        printf("Ingrese un numero: ");
        scanf("%i",&vector[i]);
    }
    for (i = 0; i < 9; i++){ //Verificnado los si el vector está ordenado de menor a mayor
        if (vector[i + 1] < vector[i]){
            orden = 0;
        }
    }
    
    if (orden == 1){
        printf("Los numeros estan organidados de menor a mayor");
    }else{
        printf("Los numeros no estan organidados de menor a mayor");
    }
    
    return 0;
}