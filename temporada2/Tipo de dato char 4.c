/*
Realizar un programa que solicite la carga de la edad y sexo de dos personas. 
Luego mostrar la edad y sexo de la persona mayor. Para almacenar el sexo definir 
variables de tipo char donde se almacenará el caracter 'm' o 'f' indicando si es del sexo masculino o femenino.

https://www.youtube.com/watch?v=j7dbgAKX654&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=69
*/
#include <stdio.h>

int main()
{
    int edad1,edad2;
    char sexo1,sexo2;

    //Informacion de la pimera persona
    printf("Ingrese la edad de la persona 1: "); 
    scanf("%i",&edad1);
    printf("Ingrese el genero de la persona 1: "); 
    scanf(" %c",&sexo1);
    //Imformacion de la segunda persona
    printf("\nIngrese la edad de la persona 2: "); 
    scanf("%i",&edad2);
    printf("Ingrese el genero de la persona 2: ");
    scanf(" %c",&sexo2);

    if (edad1 > edad2){ //Vericando la persona mayor
        printf("\nEl usuario mayor tiene %i de edad.\n",edad1);

        if (sexo1 == 'm'){ //Verificando el sexo de la primera persona
            printf("Sexo: Masculino\n");
        }else{
            printf("Sexo: Femenino\n");
        }
    }else if (edad1 > edad2){
        printf("\nEl usuario mayor tiene %i de edad.\n",edad2);

        if (sexo2 == 'm'){ //Verificando el sexo de la segunda persona
            printf("Sexo: Masculino\n");
        }else{
            printf("Sexo: Femenino\n");
        }
    }else{
        printf("\nAmbas edades son iguales.\n");
    }
    
    
    return 0;
}
