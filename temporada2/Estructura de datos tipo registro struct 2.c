/*
Se tiene la siguiente declaración de registro:

struct pais {
    char nombre[40];
    int cantidadhab;
};

Definir tres variables de tipo país y almacenar los nombres de los países y la cantidad de habitantes de dichos países.
Mostrar seguidamente el nombre del país con mayor cantidad de habitantes (considerar que los tres países tienen cantidades distintas)

https://www.youtube.com/watch?v=E-Am17sbdT0&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=133&pp=iAQB
*/

#include <stdio.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};

int main()
{
    struct pais pais1, pais2, pais3;
    
    //Ingresar los datos del primer pais
    printf("Ingrese el nombre del pais1: ");
    gets(pais1.nombre);

    printf("Ingrese la cantidad de habitantes del pais1: ");
    scanf("%i", &pais1.cantidadhab);
    fflush(stdin);

    printf("\n");

    //Ingresar los datos del segundo pais
    printf("Ingrese el nombre del pais2: ");
    gets(pais2.nombre);
    
    printf("Ingrese la cantidad de habitantes del pais2: ");
    scanf("%i", &pais2.cantidadhab);
    fflush(stdin);

    printf("\n");

    //Ingresar los datos del tercer pais
    printf("Ingrese el nombre del pais3: ");
    gets(pais3.nombre);

    printf("Ingrese la cantidad de habitantes del pais3: ");
    scanf("%i", &pais3.cantidadhab);

    printf("\n");


    //Verificar cual pais tiene la mayor cantidad de habitantes
    if ((pais1.cantidadhab > pais2.cantidadhab) && (pais1.cantidadhab > pais3.cantidadhab)){ //pais1 es mayor
        printf("El pais %s tiene la mayor cantidad de habitantes",pais1.nombre);
    }else if ((pais2.cantidadhab > pais1.cantidadhab) && (pais2.cantidadhab > pais3.cantidadhab)){ //pais2 es mayor
        printf("El pais %s tiene la mayor cantidad de habitantes",pais2.nombre);
    }else{ //pais3 es mayor
        printf("El pais %s tiene la mayor cantidad de habitantes",pais1.nombre);
    }
    
    getch();
    printf("\n");

    return 0;
}
