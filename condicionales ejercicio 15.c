//Ejercicio 15: Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dolares.

#include <stdio.h>

int main()
{
    int opcion;
    float saldo=1000,agregar_dinero,retirar_dinero;

    //Opciones o menú
    printf("\tCajero virtual");
    printf("\n(1).Ingresar dinero \n(2).Retirar dinero \n(3).Salir \n");
    scanf("%i",&opcion); //Ingresando la opcion

    //Ejecutando acciones de acuerdo a la elegida
    switch (opcion){

        //Ingresar dinero
        case 1:
            //Pidiedo al usuario cuanto dinero agregar
            printf("\nCuanto dinero desea ingresar: ");
            scanf("%f",&agregar_dinero);

            //Incrementado el saldo con la cantidad agregada
            saldo += agregar_dinero;

            //Imprimiemdo el nuevo saldo
            printf("Nuevo saldo: %.2f",saldo);
        break;
        
        //Retirar dinero
        case 2:
            //Pidiando al usuario cuanto dinero desea ingresar
            printf("\nCuanto dinero desea retirar: ");
            scanf("%f",&retirar_dinero);

            //Verficando cantidad a retirar
            if (retirar_dinero > saldo){
                //El valor a retiar es mayor que el saldo propuesto
                printf("\nLa cantidad a retirar es mayor al saldo");
            }else{
                //El valor a retirar menor que el saldo

                //Restando el saldo por el valor retirado
                saldo -= retirar_dinero;

                printf("\nRestiraste: %.2f \nSaldo disponible: %.2f",retirar_dinero,saldo);
            }  
        break;

        //Salir
        case 3:
            printf("\nGracias");
        break;

        //No se ha selecionado niguna opcion
        default:
            printf("\nLa opcion no existe");
        break;
    }

   
    return 0;
}
