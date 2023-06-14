//Ejercicio 4: Múltiplos de 5 desde 1 hasta n

#include <stdio.h>

int main()
{
    int n,i=1;

    //Imgresando el numero
    printf("Ingrese la cantidad de numero a comprobar: ");
    scanf("%i",&n);

    //Imprimiendo los multiplos de cinco
    while (i <= n){
        if(i % 5 == 0){//Filtrando los multiplos de 5
            printf("%i\n",i);
        }

        i++;
    }

    return 0;
}