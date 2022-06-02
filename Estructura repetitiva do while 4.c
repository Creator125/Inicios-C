/*
En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:

a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:

Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.

b) La suma total de los saldos acreedores. 

https://www.youtube.com/watch?v=qFZSWnS1uuk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=57
*/

#include <stdio.h>

int main()
{
    float saldo,acreedores=0;
    int num_cuenta;

    do{
        printf("Ingrese el numero de cuenta (numero negativo para terminar): ");
        scanf("%i",&num_cuenta); //Numero de cuenta
        
        if (num_cuenta >=0){ //Evitar contar el numero negativos como numero de cuenta
            printf("Ingrese el saldo: $");
            scanf("%f",&saldo); //Saldo
            printf("\n"); //Linea en blanco

            if (saldo == 0){ //Verificando el estado de la cuenta
                printf("Estado de la cuenta: Nulo\n");
            }else if(saldo > 0){
                printf("Estado de la cuenta: Acreedor\n");

                acreedores += saldo; //Sumando los saldos de los acreedores
            }else{
                printf("Estado de la cuenta: Deudor\n");
            }
        }
        
        printf("\n"); //Linea en blanco
    }while (num_cuenta >= 0 );

    printf("\nSuma total del saldos de los acreedores: %f\n",acreedores); //Sumatoria de los sados acreedores
    
    return 0;
}