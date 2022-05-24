/*Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación 
(debe mostrar el mayor y el menor de ellos) 

https://www.youtube.com/watch?v=nGLCDqznAOY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=28 */

#include <stdio.h>

int main()
{
    int var1,var2,var3;

    printf("Ingrese tres valores numericos: ");
    scanf("%i %i %i",&var1,&var2,&var3);

    //Verificando el numero mayor
    if (var1 > var2 && var1 > var3){
        printf("\nMayor: %i\n",var1);
    }else if (var2 > var1 && var2 > var3){
        printf("\nMayor: %i\n",var2);
    }else{
        printf("\nMayor: %i\n",var3);
    }
    
    //Verificando el numero menor
    if (var1 < var2 && var1 < var3){
        printf("\nMenor: %i\n",var1);
    }else if (var2 < var1 && var2 < var3){
        printf("\nMenor: %i\n",var2);
    }else{
        printf("\nMenor: %i\n",var3);
    }
    
    return 0;
}