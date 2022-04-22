//Ejercicio 13: Cambiar un número entero con el mismo valor pero en romanos.

#include <stdio.h>

int main()
{
    int numero,unidad,decenas,centenas,millar;

    //Pidiendo el numero al usuario
    printf("Ingrese un numero: ");
    scanf("%i",&numero);

    //Unidad
    unidad = numero % 10; numero /= 10;
    //Decena    
    decenas = numero % 10; numero /= 10;
    //Centena
    centenas = numero % 10; numero /= 10;
    //Millar
    millar = numero % 10; numero /= 10;

    //Imprimiendo el millar
    switch (millar){
        case 1: printf("M");  break;
        case 2: printf("MM"); break;
        case 3: printf("MMM"); break;
    }
    //Imprimiendo la centena
    switch(centenas){
        case 1: printf("C"); break;
        case 2: printf("CC"); break;
        case 3: printf("CCC"); break;
        case 4: printf("CD"); break;
        case 5: printf("D"); break;
        case 6: printf("DC"); break;
        case 7: printf("DCC"); break;
        case 8: printf("DCCC"); break;
        case 9: printf("CM"); break;
    }
    //Iprimiendo la dencena
    switch(decenas){
        case 1: printf("X"); break;
        case 2: printf("XX"); break;
        case 3: printf("XXX"); break;
        case 4: printf("XL"); break;
        case 5: printf("L"); break;
        case 6: printf("LX"); break;
        case 7: printf("LXX"); break;
        case 8: printf("LXXX"); break;
        case 9: printf("XC"); break;
    }
    //Imprimiendo la unidad
    switch(unidad){
        case 1: printf("I"); break;
        case 2: printf("II"); break;
        case 3: printf("III"); break;
        case 4: printf("IV"); break;
        case 5: printf("V"); break;
        case 6: printf("VI"); break;
        case 7: printf("VII"); break;
        case 8: printf("VII"); break;
        case 9: printf("IX"); break;
    }

    return 0;
}
