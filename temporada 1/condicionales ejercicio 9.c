//Ejercicio 9: Hacer un Programa que borre la pantalla al pulsar 1.

#include <stdio.h>
#include <stdlib.h> //Incluyendo la libreria que permite esta operacion (Borrar la pantalla)

int main()
{
    char valor;

    
    // lo que se espara quitar
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\n-------------------------------------------------------------------");
    printf("\nBienvenido al progama, persione 1 para limpiar toda la pantalla: "); 
    scanf("%c",&valor); //Leyendo la opcion ingresada por el usuario

    //Verificando la opcion
    if(valor == '1'){
        system("cls");
        printf("\nHa funcionado el limpiado de pantalla");
    }else{
        fflush(stdin);
        printf("\nNo ha funcionado el limpiado de pantalla");
        printf("\nPor favor persione 1 para limpiar toda la pantalla: "); 
        scanf("%c",&valor); //Leyendo la opcion ingresada por el usuario

        if(valor == '1'){
            system("cls");
        }else{
            printf("\nNo ha fucionado");
        }
    }
    


    return 0;
}
