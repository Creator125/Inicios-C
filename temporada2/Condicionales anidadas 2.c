//Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)

//https://www.youtube.com/watch?v=LHEMbjbpGFo&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=17

#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%i",&num); //El usuario ingresa un numero
    if(num > 0){ //Numero positivo
        printf("\nEl numero es positivo\n");
    }else{ //Verificando si es negativo o nulo (0)
        if (num == 0){ //Numero nulo (0)
            printf("\nEl numero es nulo (0)\n");
        }else{ //Numero negativo
            printf("\nEl numero es negativo\n");
        }
    }


    return 0;
}

/*La repuestas no es la misma que la del video pero seguí el tema y el resultado es el eperado */ 