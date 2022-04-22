/*
Ejercicio 16: Hace un menú que considere las siguientes opciones:

caso 1: Cubo de un numero
caso 2: Numero par o impar
case 3: salir 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int opcion,num;
    float cubo;

    //Ingresar el numero
    printf("Ingrese un numero: ");
    scanf("%i",&num);

    //Opciones
    printf("\nIngrese una opcion para continuar");
    printf("\nOpciones disponibles: \n(1).Cubo de un numero \n(2).Numero par o impar \n(3).Salir");
    printf("\nOpcion: ");
    scanf("%i",&opcion);

    //Ejeutando la opcion elejida;
    switch (opcion){
    //Opcion 1: Cubo de un numero
    case 1:
        //Hallando el cubo del numero
        cubo = pow(num,3);

        //Impriminedo el resultado
        printf("\nEl cubo del numero es: %.1f",cubo);
    break;
    
    //Opcion 2: Numero par o impar
    case 2:
        //Codicional
        if (num % 2 == 0){
            //El numero es par
            printf("\nEl numero es par");
        }else{
            //El numero es impar
            printf("\nEl numero es impar");
        }    
    break;
    
    //Opcion 3: Salir
    case 3:
        printf("\nGracias");
    break;

    //No se elijió esa opcion
    default:
        printf("\nEsa opcion no existe");
        break;
    }



    return 0;
}
