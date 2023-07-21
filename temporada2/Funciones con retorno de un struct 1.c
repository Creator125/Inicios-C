/*
Se tiene la siguiente declaración de registro:

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; //obligatorio el punto y coma
Plantear dos funciones una que cargue un registro de tipo producto y otra que lo imprima.

En la función main definir dos variables de tipo producto llamar a las funciones anteriores.

https://www.youtube.com/watch?v=lmPqFYv7TcU&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=136&pp=iAQB
*/
#include <stdio.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

//Funcion para ingresar la información del producto
struct producto cargar(){ 
    struct producto prod;
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &prod.codigo);
    fflush(stdin);

    printf("Ingrese el nombre del producto: ");
    gets(prod.descripcion);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &prod.precio);
    printf("\n");

    return prod;
}

//Funcion para imprimir la información del producto
void imprimir(struct producto prod){ 
    printf("Datos del producto\n");
    printf("Codigo: %i\n",prod.codigo);
    printf("Descripcion: %s\n", prod.descripcion);
    printf("Precio: %0.2f\n", prod.precio);
    printf("\n");
}

int main()
{
    struct producto pro1, pro2;
    pro1 = cargar();
    pro2 = cargar();

    imprimir(pro1);
    imprimir(pro2);

    getch();

    return 0;
}
