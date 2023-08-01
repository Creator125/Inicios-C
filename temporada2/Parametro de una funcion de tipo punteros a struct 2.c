/*
Se tiene la siguiente declaración de registro:

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; 
Plantear una función que reciba la dirección de un registro y mediante esta modificar los campos de la variable que le pasamos desde la main.

Imprimir el registro definido en la main.

Este ejemplo es el mismo que el anterios para uasnado una sintaxis sencilla

https://www.youtube.com/watch?v=bwEx2t_VmBI&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=149&pp=iAQB
*/
#include <stdio.h>
#include <conio.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pprod){
    printf("Ingrese codigo: ");
    scanf("%i",&pprod->codigo);
    fflush(stdin);

    printf("Ingrese descripcion: ");
    gets(pprod->descripcion);

    printf("Ingrese precio: ");
    scanf("%f",&pprod->precio);

    printf("\n");
}

void imprimir(struct producto prod){
    printf("Codigo: %i\n",prod.codigo);
    printf("Descripcion: %s\n",prod.descripcion);
    printf("Precio: %0.2f",prod.precio);
    printf("\n");
}

int main(){
    struct producto prod;
    cargar(&prod);
    imprimir(prod);
    
    getch();
    return 0;
}
