/*
Definir dos variables enteras y no inicializarlas.
Definir una variable puntero a entero, hacer que apunte sucesivamente a las dos variables enteras definidas previamente y cargue sus contenidos.
Imprimir las dos variables enteras.

https://www.youtube.com/watch?v=gzqVZ--Rk_o&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=143&pp=iAQB
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int var1,var2;
    int *pe;
    pe=&var1; //Guardar la direccion de memoria de var1
    *pe=100; //Asignar esa direccion de memoria un valor (asignadole a var1)
    pe=&var2; //Guardar la direccion de memoria de var2
    *pe=200; //Asignar esa direccion de memoria un valor (asignadole a var2)

    printf("Valor de la primera variable:%i\n",var1);
    printf("Valor de la segunda variable:%i\n",var2);
    
    getch();
    return 0;
}
