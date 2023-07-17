/*
Se tiene la siguiente declaración de registro:
struct pais {
    char nombre[40];
    int cantidadhab;
};
Definir tres variables de tipo país e iniciarlas por asignación con la sintaxis:
struct pais pais1={"Argentina",40000000};

Elaborar una función que reciba un parámetro de tipo pais y muestre por pantalla sus dos campos. 
Llamar a dicha función desde la main pasando en forma sucesiva las tres variables definidas.

https://www.youtube.com/watch?v=wR9p_Y98VXY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=135&pp=iAQB
*/
#include <stdio.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};

//Funcion para imprimir los 3 paises ingresados
void imprimir(struct pais p){
    printf("Pais 1:");
    printf("Nombre: %s\n",p.nombre);
    printf("Cantidad de habitantes: %i\n",p.cantidadhab);
    printf("\n");
}

int main()
{
    //Ingresar las tres estructuras
    struct pais pais1 = {"Colombia", 2000000};
    struct pais pais2 = {"Jamaica", 1000000};
    struct pais pais3 = {"Brazil", 6000000};

    imprimir(pais1);
    imprimir(pais2);
    imprimir(pais3);

    getch();
    printf("\n");

    return 0;
}
