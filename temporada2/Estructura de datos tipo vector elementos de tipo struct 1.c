/*
Se tiene la siguiente declaración de registro:

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; 
Definir un vector de 4 elementos de tipo producto.
Implementar las funciones:

Carga del vector.
Impresión del vector.
Mostrar el nombre del articulo con precio mayor.

https://www.youtube.com/watch?v=qQCLCXp2KZc&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=138&pp=iAQB
*/
#include <stdio.h>

#define SIZE 4

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto vec[SIZE]){
    for (int f = 0; f < SIZE; f++){
        printf("Ingrese el codigo del producto #%i: ",f+1);
        scanf("%i", &vec[f].codigo);
        fflush(stdin);

        printf("Ingrese la descripcion del producto #%i: ",f+1);
        gets(vec[f].descripcion);

        printf("Ingrese el precio del producto #%i: ",f+1);
        scanf("%f", &vec[f].precio);

        printf("\n");
    }
    printf("\n");
}

void imprimir(struct producto vec[SIZE]){
    for (int f = 0; f < SIZE; f++){
        printf("%i %s %0.2f\n", vec[f].codigo, vec[f].descripcion, vec[f].precio);
    }
}

void mostrarPrecioMayor(struct producto vec[SIZE]){
    int pos = 0;

    for (int f = 0; f < SIZE; f++){
        if (vec[f].precio > vec[pos].precio){
            pos = f;
        } 
    }
    
    printf("Producto con mayor valor: %s", vec[pos].descripcion);
}

int main(){
    struct producto vector[SIZE];

    cargar(vector);
    imprimir(vector);
    mostrarPrecioMayor(vector);

    getch();
    return 0;
}

