/* Ingrese un número y calcule e imprima su raíz cuadrada. 
Si el numero es negativo imprima el número y un mensaje que diga “tiene raíz imaginaria” */

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float raiz;
    
    printf("Ingrese tu numero para hallar una raiz cuadadra: \n");
    scanf("%i",&num); //Pidiendo el numero al usuario

    if (num > 0){
        //Hayar la raiz cuadrada
        raiz = sqrt(num);
        printf("La raiz caudarada de tu numero es: %.1f",raiz);
    }else{
        //Raz imaginaria
        printf("Tiene raíz imaginaria");
    }
    

    return 0;
}
