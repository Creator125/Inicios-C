/*
Ejercicio 12: Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico
1 - turismo, peaje = $500.
2 - autobus, peaje = $3000.
3 - motocicleta, peaje = $300.
caso contrario - Vehiculo no autorizado.
*/

#include <stdio.h>

int main()
{
    int tipo_veiculo;

    //Preguntando el tipo de veiculo
    printf("Selecione el tipo de veiculo: \n(1).Turismo \n(2).Autobus \n(3).Motocicleta\n");
    scanf("%d",&tipo_veiculo);

    //Verificando el tipo de veiculo para el peaje
    switch (tipo_veiculo)
    {
    case 1:
        //Turismo
        printf("\nEl valor de tu peaje es: $500");
        break;

    case 2:
         //Autobus
        printf("\nEl valor de tu peaje es: $3000");
        break;

    case 3:
        //Motocicleta
        printf("\nEl valor de tu peaje es: $300");
        break;
    
    default:
        //No es ningun tipo
        printf("\nVeiculo no autorizado");
    }
    

    return 0;
}
