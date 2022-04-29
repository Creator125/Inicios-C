//Ejercicio 2: Digite un número, si el numero supera a 10, multiplique los 10 primeros números, sino, súmelos (Propuesto)

#include <stdio.h>

int main()
{
    int i;
    float n,operador=1;

    //La cantidad de numero a sumar (n)
    printf("Ingrese el total de numero a contar: ");
    scanf("%f",&n);

    i = 1;

    if(n > 10){ //Multiplicacion
        while (i <= n){ 
            operador *= i;            
            i++;
        }

        //Impriendo mensaje
        printf("\nSe hizo una multiplicacion\n");
        printf("El resultado es: %.1f",operador);

    }else{//Suma
        while (i <= n){ 
            operador += i;
            i++;
        }

        //Impriendo mensaje
        printf("\nSe hizo una suma\n");
        printf("El resultado es: %.f",operador);

    }

    return 0;
}
