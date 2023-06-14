//Desarrollar una función que solicite la carga de tres valores y muestre el menor. Desde la función main llamar 3 veces a dicha función.

//https://www.youtube.com/watch?v=bdPmjEFUHDM&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=89

#include <stdio.h>

void mostrarMenor() //La funcion que muestra el menor de tres numeros ingresado
{
    int var1,var2,var3;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&var1,&var2,&var3);

    if (var1 < var2 && var1 < var3){ //Verificando cual numero es menor
        printf("\nEl numero menor es %i\n",var1);
    }else if (var2 < var1 && var2 < var3){
        printf("\nEl numero menor es %i\n",var2);
    }else{
         printf("\nEl numero menor es %i\n",var3);
    }
}


void separador() //La funcion que imprime una linea separadora
{
    printf("\n______________________________\n\n");
}

int main() //La función principal
{
    mostrarMenor();
    separador();

    mostrarMenor();
    separador();

    mostrarMenor();
    separador();

    return 0;
}