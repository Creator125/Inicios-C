/* Realizar un programa que lea los lados de n triángulos, e informar:

a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o cont_escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.

https://www.youtube.com/watch?v=pFIDmAQIHbw&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=49 */

#include <stdio.h>

int main()
{
    int lado1,lado2,lado3,i,n,cont_equilatero=0,cont_isosceles=0,cont_escaleno=0;

    printf("Cantidad de triangulos a procesar: ");
    scanf("%i",&n);

    for (i = 1; i < n; i++){
        printf("\nIngrese tres lados del triangulo (%i): ",i);
        scanf("%i %i %i",&lado1,&lado2,&lado3); //Los tres lados que se va ingresar por el usuario

        //Verificando el tipo de lado
        if((lado1 == lado2) && (lado2 == lado3)){ //Triangulo Equiratero
            printf("El triangulo es Equiratero\n");

            cont_equilatero ++; //Contando los triangulos esquilateros
        }else if((lado1 == lado2) || (lado2 == lado3) || (lado3 == lado1)){ //Triangulo Isósceles
            printf("El triangulo es isosceles\n");

            cont_isosceles ++; //Contando todos los triangulo isoceles
        }else{ //Triangulo Escaleno
            printf("El triangulo es escaleno\n");

            cont_escaleno ++; //Contando todos los triangulos escalenos
        }
    }

    printf(" \nTriangulo equilateros: %i \nTriangulo isosceles: %i \nTriangulo escalenos: %i\n",cont_equilatero,cont_isosceles,cont_escaleno); //Cantidad de cada tipo de triangulo

    if ((cont_equilatero < cont_isosceles) && (cont_equilatero < cont_escaleno)){ //Verificando el tipio de triangulo que tiene menor cantidad
        printf("El tipo de traiangulo que posee menor cantidad es el Equilatero");
    }else if (cont_isosceles < cont_equilatero && cont_isosceles < cont_escaleno){
        printf("El tipo de traiangulo que posee menor cantidad es el Isosceles");
    }else{
        printf("El tipo de traiangulo que posee menor cantidad es el Escaleno");
    }
    
    return 0;
}