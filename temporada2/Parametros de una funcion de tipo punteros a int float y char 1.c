/*
Confeccionar una función que reciba como parámetros las direcciones 
de dos variables enteras y le cargue a lo apuntado por dichas variables dos enteros.

https://www.youtube.com/watch?v=uRqRzhQEqg4&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=145&pp=iAQB
*/
#include <stdio.h>
#include <conio.h> 

void cargar(int *pe1, int *pe2){
    *pe1 = 100;
    *pe2 = 200;
}

int main(){
    int var1, var2;

    cargar(&var1, &var2);
    printf("%i %i",var1,var2);
    
    getch();
    return 0;
}
