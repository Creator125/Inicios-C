/*Ejercicio 10: Una distribuidora de motocicletas tiene una promoción de fin de año que consiste en lo siguiente. 
Las motos marca Honda tienen un descuento del 5%, las marcas Yamaha del 8% y las Suzuki del 10%, las otras marcas 2%.*/

#include <stdio.h>

int main()
{
    float valor,descuento,valor_final;
    char marca[20];

    //Marca de la moto
    printf("Ingrese la marca de la moto a comprar: ");
    gets(marca);
    //Valor de la moto
    printf("Ingrese el valor de la moto: ");
    scanf("%f",&valor);

    //Verificando la marca de la moto y el precio
    if(strcmp(marca,"Honda")==0 || strcmp(marca,"honda")==0){
        //Honda
        //Descuento de 5%
        descuento = valor * 0.5;
    } else if(strcmp(marca,"Yamaha")==0 || strcmp(marca,"yamaha")==0){
        //Yamaha
        //Descuento de 8%
        descuento = valor * 0.8;
    }else if(strcmp(marca,"Suzuki")==0 || strcmp(marca,"suzuki")==0){
        //Suzuki
        //Descuento de 10%
        descuento = valor * 1.0;
    }else{
        //Otras marcas
        //Descuento de 2%
        descuento = valor * 0.2;
    }
    
    //Realizando el descuento
    valor_final = valor - descuento;

    //Imprimiendo el resutado
    printf("El valor de la moto de selecionada es: %.1f",valor_final);

    return 0;
}
