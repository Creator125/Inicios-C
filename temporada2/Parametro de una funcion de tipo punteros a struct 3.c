/*
Se tiene la siguiente declaración de registro:

struct pais {
    char nombre[40];
    int cantidadhab;
};

Definir tres variables de tipo país en la función main.
Crear una función que reciba un puntero de tipo pais y cargue por teclado el nombre del país y la cantidad de habitantes.
Mostrar en otra función los datos cargados de cada país.

https://www.youtube.com/watch?v=bOy9MjvscvU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=152&pp=iAQB
*/
#include <stdio.h>
#include <conio.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};

void cargar(struct pais *ppais){
    printf("Ingrese el nombre del pais: ");
    gets(ppais -> nombre);

    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i", &ppais->cantidadhab);
    fflush(stdin);

    printf("\n");
}

void imprimir(struct pais paisx){
    printf("Nombre del pais: %s\n",paisx.nombre);
    printf("Cantidad de habitantes: %i\n",paisx.cantidadhab);
    printf("\n");
}

int main(){
    struct pais pais1, pais2, pais3;

    cargar(&pais1);
    cargar(&pais2);
    cargar(&pais3);
    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);

    getch();
    return 0;
}
