//Ejercicio 14: Mostrar los meses del año, pidiéndole al usuario un numero entre (1-12) y mostrar el mes al que corresponde.

#include <stdio.h>

int main()
{
    int mes;

    //Pidiendo el mes en numero al usuario
    printf("Ingrese el numero del mes (1-12): ");
    scanf("%d",&mes);

    //Verificando el mes
    switch (mes){

    case 1: printf("\nEnero"); break;
    case 2: printf("\nFebrero"); break;
    case 3: printf("\nMarzo"); break;
    case 4: printf("\nAbril"); break;
    case 5: printf("\nMayo"); break;
    case 6: printf("\nJunio"); break;
    case 7: printf("\nJulio"); break;
    case 8: printf("\nAgosto"); break;
    case 9: printf("\nSeptienbre"); break;
    case 10: printf("\nOctubre"); break;
    case 11: printf("\nNoviebre"); break;
    case 12: printf("\nDicienbre"); break;

    //No se eligio nigun numero del rango (1-12)
    default: printf("\n No existe ese mes"); break;
    }

    return 0;
}
