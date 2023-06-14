/* Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la 
longitud de cada perfil; sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. 
Imprimir por pantalla la cantidad de piezas aptas que hay en el lote. 

https://www.youtube.com/watch?v=5wss2kMkpU8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=32 */

#include <stdio.h>

int main()
{
    int n,i=1,cantidad=0;
    float largo_pieza;

    printf("Ingrese la cantidad de piezas a procesar: ");
    scanf("%i",&n); //Catidad de piezas ingresada por el usuario

    while (i <= n){
        printf("Ingrese el largo de la pieza %i: ",i);
        scanf("%f",&largo_pieza); //El largo de la pieza ingresada por el usuario

        if (largo_pieza >= 1.20 && largo_pieza <= 1.30){ //El rango debe ser entre 1.20 a 1.30
            cantidad += 1; //Incrementado la cantidad de piezas si el valor está en el rango
        }
        
        i++; //Inclementado el iterador
    }

    printf("\nCantidad de piezas aptas: %i\n",cantidad);

    return 0;
}