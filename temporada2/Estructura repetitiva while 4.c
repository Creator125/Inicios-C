//Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.

//https://www.youtube.com/watch?v=0KO8Xul7kdo&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=33

#include <stdio.h>

int main()
{
    int notas,i=1,mayor=0,menor=0;

    while (i <= 10){ //Contando 10 veces
        printf("Ingrese la nota %i: ",i);
        scanf("%i",&notas); //El usuario ingresa sus notas

        if (notas >= 7){ //notas mayores
            mayor += 1;
        }else{ //Notas menores
            menor += 1;
        }
        
        i++;
    }
    
    printf("\nNotas mayores: %i \nNotas menores: %i\n",mayor,menor);

    return 0;
}
