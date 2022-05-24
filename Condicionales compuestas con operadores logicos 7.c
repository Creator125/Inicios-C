/*De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:

a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b) Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios. 

https://www.youtube.com/watch?v=pqiT6-B8Nz8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=27 */

#include <stdio.h>

int main()
{
    int experiencia;
    float sueldo,aumento,sueldo_total;

    printf("Ingrese el sueldo del operario: $");
    scanf("%f",&sueldo); //Sueldo del operario
    printf("Ingrese sus años de antiguedad: ");
    scanf("%i",&experiencia); //Años de antiguedad del operario

    if (sueldo < 500 && experiencia >= 10){ //Item (a)
        aumento = sueldo * 0.20; //Aumento del 20%
        sueldo_total = sueldo + aumento;

        printf("\nEl sueldo a pagar es: $%.1f\n",sueldo_total);
    }else if (sueldo < 500 && experiencia < 10){ //Item (b)
        aumento = sueldo * 0.5; //Aumento del 5%
        sueldo_total = sueldo + aumento;

        printf("\nSueldo: $%.1f\n",sueldo_total);
    }else{ //Item (b)
        //Aquí no hay aumento
        printf("\nEl sueldo es: $%.1f\n",sueldo);
    }
    
    
    return 0;
}