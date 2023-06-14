//Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas. Utilizar una variable de tipo char dentro de un for.

//https://www.youtube.com/watch?v=fvH6DALra1E&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=67

#include <stdio.h>

int main()
{
    char letra;

    for (letra = 'A'; letra <= 'Z'; letra++){ //Recorriendo el abecedario en mayuscula
        printf("%c ",letra);
    }
    printf("\n"); //Salto de linea
    for (letra = 'a'; letra <= 'z'; letra++){ //Recorriendo el abecedario en minuscula
        printf("%c ",letra);
    }
    
    return 0;
}