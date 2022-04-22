/*Ejercicio 7: Ingresar por teclado el nombre y el signo de cualquier persona e imprima, 
el nombre solo si la persona es signo Aries, caso contrario imprima no es signo Aries.*/

#include <stdio.h>

int main()
{
    char nombre[30],signo[20];

    printf("Ingrese tu nombre: ");
    gets(nombre); //Leyendo el nombre ingresado por el usuario.
    printf("\nIngrese tu signo: ");
    gets(signo); //Leyendo el signo ingresado por el usuario.

    //Verificando si es signo Aries
    if (strcmp(signo,"Aries")==0 || strcmp(signo,"aries")==0){
        //Es Aries
        printf("\nBienvenido: %s, eres Aries",nombre);
    }else{
        //No es Aries
        printf("\nNo eres signo Aries");
    }
    
    
    return 0;
}
