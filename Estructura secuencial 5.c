/*Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente. 
Mostrar lo que debe abonar el comprador.*/
//Definir una variable float para el precio del artículo.

//https://www.youtube.com/watch?v=saEw8G-ZXgw&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=9

#include <stdio.h>

int main()
{
    float precio,precio_total;
    int cantidad;

    printf("Ingrese el precio del prducto: ");
    scanf("%f",&precio); //Pidiendo el precio del producto
    printf("Ingrese al cantidad a comprar: ");
    scanf("%i",&cantidad); //Pidiendo la cantidad a comprar

    precio_total = precio * cantidad; //Calculando lo que el cliente debe abonar

    printf("\nPrecio total: $%.2f\n",precio_total); //Impriendo el total a imprimir del producto
    

    return 0;
}