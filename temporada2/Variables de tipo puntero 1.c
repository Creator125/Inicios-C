/*
Definir dos variables enteras y almacenar valores por asignación. 
Definir una variable puntero a entero y guardar sucesivamente las 
direcciones de dichas dos variables y acceder a sus valores.

https://www.youtube.com/watch?v=DW6r26Kx-yU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=142&pp=iAQB
*/
#include <stdio.h>

int main(){
    int valor1 = 50;
    int valor2 = 47;
    int *pe;

    pe = &valor1;
    printf("Lo apuntado por pe es: %i\n",*pe);
    printf("La direccion que almacena pe es:%p\n",pe);

    pe = &valor2;
    printf("Lo apuntado por pe es: %i\n",*pe);
    printf("La direccion que almacena pe es:%p\n",pe);
    
    getch();
    return 0;
}
