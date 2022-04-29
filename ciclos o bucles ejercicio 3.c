//Ejercicio 3: Múltiplos de 3 desde 1 hasta n

#include <stdio.h>

int main()
{
    int n,i=1;

    //Imgresando el numero
    printf("Ingrese la cantidad de numero a comprobar: ");
    scanf("%i",&n);

    //Imprimiendo los multiplos de tres
    while (i <= n){
        if(i % 3 == 0){//Filtrando los multiplos de 3
            printf("%i\n",i);
        }

        i++;
    }

    return 0;
}
