/*
Se tienen el siguiente programa:
#include<stdio.h>
#include<conio.h>

int main()
{
    char c1='A';
    char c2='B';
    char *pc;
    pc=&c1;
    printf("%c\n",c1); //se imprime: ?
    *pc='a';
    printf("%c\n",c1); //se imprime: ?
    c1='Z';
    printf("%c\n",*pc); //se imprime: ?
    pc=&c2;
    printf("%c\n",*pc); //se imprime: ?
    getch();
    return 0;
}
Indicar que valor se imprime en cada llamada a printf.

https://www.youtube.com/watch?v=UhTo24VQuT8&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=144&pp=iAQB
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char c1='A';
    char c2='B';
    char *pc;

    pc=&c1;
    printf("%c\n",c1); //se imprime: A

    *pc='a';
    printf("%c\n",c1); //se imprime: a

    c1='Z';
    printf("%c\n",*pc); //se imprime: Z

    pc=&c2;
    printf("%c\n",*pc); //se imprime: B

    getch();
    return 0;
}