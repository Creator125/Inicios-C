/*
Se tienen el siguiente programa:
#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    int *pe;
    pe=&f;
    for(*pe=1;*pe<=10;*pe=*pe+1)
    {
        printf("%i\n",f); //se imprime ?
    }
    getch();
    return 0;
}
Indicar que valor se imprime en cada llamada a printf.

https://www.youtube.com/watch?v=UhTo24VQuT8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=144&pp=iAQB
*/
#include <stdio.h>
#include <conio.h> //Ya entiendo para que sirve. Para evitar el mensaje de alerta al usar getch();

int main(){
    int f;
    int *pe;
    pe=&f;

    for(*pe=1; *pe<=10; *pe = *pe+1){
        printf("%i\n",f); //se imprime 1 2 3 4 5 6 7 8 9 10
    }

    getch();
    return 0;
}