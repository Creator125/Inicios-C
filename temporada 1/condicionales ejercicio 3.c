/*Ejercicio 3: Visualizar la tarifa de la luz según el gasto de corriente eléctrica. 
Para un gasto menor de 1.000Kwxh la tarifa es 1.2, entre 1.000 y 1.850Kwxh es 1.0 y mayor de 1.85OKwxh 0.9.*/

#include <stdio.h>

int main()
{

    float corriente_electrica,tarifa;

    printf("Ingrese el gatos de energia: ");
    scanf("%f", &corriente_electrica); //Pidiendo la corriente electrica al usuario

    //Verificndo el valor de la tarifa electrica
    if (corriente_electrica > 1.850){
        //Si el gasto es mayor de 1.85OKwxh 0.9
        tarifa = 0.9;
    }else if ((corriente_electrica >= 1.000) && (corriente_electrica <= 1.850)){
        //Si el gatos está entre 1.000 y 1.850Kwxh
        tarifa = 1.0;
    }else{
        //Si el gasto es menor de 1.000Kwxh
        tarifa = 1.2;
    }

    //Imprimiendo la desicion del condicional
    printf("\nTu gasto fue %.3fKwxh, estonces tu tarifa es de %.1f \n",corriente_electrica,tarifa);
    
    

    return 0;
}
