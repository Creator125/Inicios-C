//Ejercicio 5: Sumar 1-2+3-4...

#include <stdio.h>

int main()
{
    int n,i=1,suma=0,suma_pares=0,suma_impares=0,i_negativo;

    printf("Ingrese la cantidad de numeros a sumar: "); //Preguntando la cantidad de numeros a analizar al usuario
    scanf("%i",&n);

    while (i <= n){
        if (i % 2 == 0){//Suma de los numeros pares
            //Convirtiendo el itrador a negativo6
            i_negativo = i * (-1);
            suma_pares += i_negativo;
        }else{//Suma de los numeros impares
            suma_impares += i;
        }

        suma = suma_impares + suma_pares; //Suma general

        i++;
    }
    
    printf("Resultado de tu operacion: %i",suma);


    return 0;
}
