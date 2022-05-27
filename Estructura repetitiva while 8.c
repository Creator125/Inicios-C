/* Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
Debe aparecer en pantalla 8 - 16 - 24, etc.

https://www.youtube.com/watch?v=XUsTAuWxCS4&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=37 */

#include <stdio.h>

int main()
{
    int mult=8;

    while (mult <= 500){
        printf("%i ",mult);
        
        mult += 8; //Obteniendo el multpiplo
        mult++;
    }

    printf("\n");

    return 0;
}
