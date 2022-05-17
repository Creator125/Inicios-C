//Ejercicio 5: Calcular el mayor de dos números leídos del teclado y visualizarlo en pantalla.

#include <stdio.h>

int main()
{
    int num1,num2;

    printf("Ingrese dos numeros: ");
    scanf("%i %i",&num1,&num2); //Leyendo los dos numeros

    //Veriicar cual numero es mayor
    if (num1 > num2){
        //num1 es mayor
        printf("\nEl numero mayor es: %i",num1);
    }else if (num1 < num2){
        //num2 es mayor
        printf("\nEl numero mayor es: %i",num2);
    }else{
        //Ambos numeros son iguales
        printf("Los dos numeros son iguales");
    }
    

    return 0;
}
