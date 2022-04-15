/*Ejercicio 7: Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea 
saber cuánto deberá pagar finalmente por su compra.*/

#include <stdio.h>

int main(){
    //Definiendo las varibles
    float compra,descuento,compra_total;

    //Entrada y salida
    printf("Ingrese el valor a pagar: $"); scanf("%f",&compra);

    //Aplicando descuento
    descuento = compra * 0.15;
    //Opteniendo el descuento
    compra_total = compra - descuento;


    //Imprimiendo el resultado
    printf("Valor total a pagar: $%.2f",compra_total);

    return 0;
}
