/*
Elaborar una función que se le pase la dirección de una variable entera e 
incremente en 1 lo apuntado por dicha variable.

https://www.youtube.com/watch?v=t_6IhBieRqc&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=146&pp=iAQB
*/
#include <stdio.h>
#include <conio.h>

void incrementar(int *pe){
    *pe = *pe + 1;
}

int main(){
    int x = 0;

    printf("%i\n",x);
    incrementar(&x);
    printf("%i\n",x);
    incrementar(&x);
    printf("%i\n",x);
    incrementar(&x);

    int z = 10;
    printf("%i\n",z);
    incrementar(&z);
    printf("%i\n",z);
    
    getch();
    return 0;
}
