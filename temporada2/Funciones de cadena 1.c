/*
Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos string. 
Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123"

https://www.youtube.com/watch?v=j8wVppnVnYo&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=82
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char usuario[20];
    char clave[20];

    printf("Ingrese el usuario: "); //Usuario
    gets(usuario);
    printf("Ingrese la clave: "); //contraseña
    gets(clave);

    if (strcmp(clave,"abc123")==0){ //Verificando si la contraseña es igual a la requerida (abc123)
        printf("\nClave correcta\n");
    }else{
        printf("\nClave incorrecta\n");
    }
    
    return 0;
}
