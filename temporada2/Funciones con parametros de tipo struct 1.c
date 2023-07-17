/*
Se tiene la siguiente declaración de registro:

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

Definir una variable en la función main e inicializar por asignación los tres campos.
Plantear una función que reciba el registro y lo imprima.

https://www.youtube.com/watch?v=XG0aSrqqcdY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=134&pp=iAQB
*/
#include <stdio.h>
#include <string.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void imprimir(struct producto p){
    printf("Codigo del prodcuto: %i\n", p.codigo);
    printf("Descripcion: %s\n", p.descripcion);
    printf("Precio: %0.2f\n", p.precio);
}

int main()
{
    struct producto prod = {1, "Carne de cerdo", 4000};

    /*
    prod.codigo = 1;
    strcpy(prod.descripcion, "Carne de cerdo");
    prod.precio = 4.000;
    */

    imprimir(prod);

    getch();
    return 0;
}
