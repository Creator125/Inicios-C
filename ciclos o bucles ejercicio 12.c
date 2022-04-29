//Ejercicio 12: Serie Fibonacci

#include <stdio.h>

int main()
{
    int i,n,x=0,y=1,z=1;

    printf("Ingrese un numero de elementos: "); scanf("%i",&n);

    printf("1 .");

    for (i = 1; i <= n; i++){
        z = x + y; //z almacena la suma de x + z
        x = y; //x tendrá el valor de y
        y = z; //y tendra el valor de z que es el valor aneterior
        
        printf("%i .",z);
    }
    

    return 0;
}
