/*
Cargar tres nombres por teclado. Generar un cuarto string que almacene los tres nombres 
ingresados por teclado en orden alfabético separados por una coma. 

https://www.youtube.com/watch?v=JxO8hMN9aCk&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=85
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char nombre1[20],nombre2[20],nombre3[20],nombres[60];

    printf("Ingrese el nombre de la primera persona: "); //nombre 1
    gets(nombre1);
    printf("Ingrese el nombre de la segunda persona: "); //nombre 2
    gets(nombre2);
    printf("Ingrese el nombre de la tercera persona: "); //nombre 3
    gets(nombre3);

    if (strcmp(nombre1,nombre2)>0 && strcmp(nombre1,nombre3)>0){ //Primer nombre
        strcpy(nombres,nombre1);
        strcat(nombres,", ");
        
        if (strcmp(nombre2,nombre1)>0 && strcmp(nombre2,nombre3)>0){
            strcat(nombres,nombre2);
            strcat(nombres,", ");
            strcat(nombres,nombre3);
        }else{
            strcat(nombres,nombre3);
            strcat(nombres,", ");
            strcat(nombres,nombre2);
        }
    }else if (strcmp(nombre2,nombre3)>0){ //Segundo nombre
        strcpy(nombres,nombre2);
        strcat(nombres,", ");

        if (strcmp(nombre2,nombre3)>0){
            strcat(nombres,nombre1);
            strcat(nombres,", ");
            strcat(nombres,nombre3);
        }else{
            strcat(nombres,nombre3);
            strcat(nombres,", ");
            strcat(nombres,nombre1);
        }
    }else{ //Tercer nombre
        strcpy(nombres,nombre3);
        strcat(nombres,", ");

        if (strcmp(nombre1,nombre3)>0){
            strcat(nombres,nombre1);
            strcat(nombres,", ");
            strcat(nombres,nombre2);
        }else{
            strcat(nombres,nombre2);
            strcat(nombres,", ");
            strcat(nombres,nombre1);
        }
    }

    printf("\nNombres ordenados alfabeticamente:\n");
    printf("%s\n",nombres);

    return 0;
}
