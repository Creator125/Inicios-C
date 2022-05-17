/*Ejercicio 8: Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, 
solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.*/

#include <stdio.h>

int main()
{
    char nombre[30],genero[20];
    int edad;

    //Formulario
    printf("Ingrese tu nombre: ");
    gets(nombre); //Leyendo el nombre ingresado por el usuario
    printf("Ingrese el genero: ");
    gets(genero); //Leyendo el genero
    printf("ingrese tu edad: ");
    scanf("%i",&edad); //Leyendo la edad


    //Verificando requisitos
    if (strcmp(genero,"masculino")==0 && edad >= 18){
        //los dos requsitos son verdaderos
        printf("\nTu nombre: %s \nTu edad: %i \nTu genero: %s \nbienvenido",nombre,edad,genero);
    }else{
        //No cumple con los requisitos solicitados
        printf("No cumples los requisitos");
    }

    return 0;
}

