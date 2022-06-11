//Confeccionar un programa que permita ingresar una palabra y luego muestre un mensaje si la misma comienza con la vocal 'A' o 'a'

//https://www.youtube.com/watch?v=WXzE_n_cfpg&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=76

#include <stdio.h>

int main()
{
    char palabra[30];

    printf("Ingrese un palabra: ");
    gets(palabra);

    //Comprobando si la palabra comienza con una vocal
    if ((palabra[0] == 'a') || (palabra[0] == 'A')){
        printf("\nLa palabra %s comienza con A o a.\n",palabra);
    }else{
        printf("\nLa palabra %s no comienza con A o a.\n",palabra);
    }


    return 0;
}
