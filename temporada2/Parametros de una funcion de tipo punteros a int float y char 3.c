/*
Implementar una función que intercambie el contenido de dos variables 
enteras, utilizar punteros para solucionarlo.

https://www.youtube.com/watch?v=3iS28w5p7i8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=147&pp=iAQB
*/
#include <stdio.h>
#include <conio.h>

void intercambiar(int *pe1, int *pe2){
    int aux = *pe1;
    *pe1 = *pe2;
    *pe2 = aux;
}

int main(){
    int var1 = 30;
    int var2 = 50;

    printf("%i %i\n",var1, var2);
    intercambiar(&var1, &var2);
    printf("%i %i\n",var1, var2);

    getch();
    return 0;
}
