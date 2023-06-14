 /* 
 Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 
 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado e informar 
 si dicho valor es cero, mayor a cero o menor a cero

 https://www.youtube.com/watch?v=Qsb6StuFxMc&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=56
 */

#include <stdio.h>

int main()
{
    int valor,suma=0;

    do{
        printf("Ingrese un numero: ");
        scanf("%i",&valor);

        if (valor != 9999){
            suma += valor; //Acumulando los valores
        }
        
    }while (valor != 9999);
    
    printf("Ha finalizado la carga\n");
    printf("\nSuma total de los valores: %i",suma); //Impriendo la suma total de los valores

    //Comparando el valor acumulado (suma) con cero (0)
    if (suma == 0){
        printf("\nEs igual a cero\n");
    }else if (suma > 0){
        printf("\nEs mayor a cero\n");
    }else if (suma < 0){
        printf("\nEs menor a cero\n");
    }
    
    return 0;
}
