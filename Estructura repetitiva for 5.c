/* Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base 
y la altura de un triángulo. El programa deberá informar:

a) De cada triángulo la medida de su base, su altura y su superficie.
b) La cantidad de triángulos cuya superficie es mayor a 12. 

https://www.youtube.com/watch?v=SYBqVCn4pec&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=45 */

#include <stdio.h>

int main()
{
    int b,h,superficie,i,superficie_mayor=0,n;

    printf("Cantidad de triangulos a calcular: ");
    scanf("%i",&n);

    for (i = 1; i <= n; i++){
        //Pidieendo el par de datos importantes al usuario
        printf("\nIngrese la base del triangulo (%i): ",i);
        scanf("%i",&b); //Base del triangilo
        printf("Ingrese la altura del triangulo (%i): ",i);
        scanf("%i",&h); //Altura del triangilo

        superficie = (b * h) / 2; //Obteniendo la superficie del triangulo

        printf("\nSuperficie: %i\n",superficie); //Mostrando la superficie

        if (superficie > 12){ //Contando los triangulos con una superficie mayor a 12
            superficie_mayor ++;
        }
    }
    
    printf("\nTriangulos con una superficie mayor a 12: %i\n",superficie_mayor); //Mostrando la cantidad de triangulos con una superficie mayor de 12

    return 0;
}