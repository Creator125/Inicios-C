/*
Se tiene la siguiente declaración de registro:
struct punto {
    int x;
    int y;
};
Definir tres variables de tipo punto y cargarlas llamando a una función que retorne valores de tipo punto.
Finalmente crear otra función que imprima en que cuadrante se encuentra cada punto 
(tener en cuenta que si x>0 e y>0 se encuentra en el primer 
cuadrante, si x<0 e y>0 se encuentra en el segundo cuadrante y así sucesivamente)

https://www.youtube.com/watch?v=jN77kGt9CGg&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=137&pp=iAQB
*/
#include <stdio.h>

struct punto {
    int x;
    int y;
};

struct punto cargar(){
    struct punto p;

    printf("Ingrese el punto x: ");
    scanf("%i", &p.x);
    fflush(stdin);

    printf("Ingrese el punto y: ");
    scanf("%i", &p.y);
    printf("\n");

    return(p);
}

void imprimir(struct punto p){
    if (p.x > 0 && p.y > 0){
        printf("La coordenada (%i, %i) se encuentra en el pimer cuadrante", p.x,p.y);
    }else if(p.x < 0 && p.y > 0){
        printf("La coordenada (%i, %i) se encuentra en el segundo cuadrante", p.x,p.y);
    }else if(p.x < 0 && p.y < 0){
        printf("La coordenada (%i, %i) se encuentra en el tercer cuadrante", p.x,p.y);
    }else if(p.x > 0 && p.y < 0){
        printf("La coordenada (%i, %i) se encuentra en el cuarto cuadrante", p.x,p.y);
    }
    printf("\n");
}

int main(){
    struct punto p1, p2, p3;
    p1 = cargar();
    p2 = cargar();
    p3 = cargar();

    imprimir(p1);
    imprimir(p2);
    imprimir(p3);

    getch();

    return 0;
}
