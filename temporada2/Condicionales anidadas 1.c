//Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.

//https://www.youtube.com/watch?v=KkJLhxBix8Q&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=16

#include <stdio.h>

int main()
{
    int num1,num2,num3;

    printf("Ingrese tres numeros: ");
    scanf("%i %i %i",&num1,&num2,&num3); //Registrando los tres numeros

    if ((num1 > num2) && (num1 > num3)){ //Si el primer numero es mayor
        printf("\n%i es mayor\n",num1);
    }else if ((num2 > num1) && (num2 > num3)){ //Si el segundo numero es mayor
        printf("\n%i es mayor\n",num2);
    }else{ //Si el tecer numero es mayor
        printf("\n%i es mayor\n",num3);
    }
    
    


    return 0;
}

/*¡Bueno!, no fue como la tematica esperaba al ver el video pero el resultado fue dio igual que el esperado
por lo menos lo tendré en cuenta para la proxima */