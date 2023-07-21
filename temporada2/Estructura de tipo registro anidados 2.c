/*
Se tienen las siguientes declaraciones de registros:
struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};
Definir en la main un registro de tipo triangulo.
Codificar las funciones:
1-Una función que retorne un registro de tipo triangulo.
2-Impresión del registro.

https://www.youtube.com/watch?v=nsSPEtOZffc&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=141&pp=iAQB
*/
#include <stdio.h>

struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct triangulo cargar(){
    struct triangulo t;
    //Punto 1
    t.punto1.x = 10;
    t.punto1.y = 45;
    //Punto 2
    t.punto2.x = 30;
    t.punto2.y = 4;
    //Punto 3
    t.punto3.x = 2;
    t.punto3.y = 4;

    printf("\n");
    return t;
}

void imprimir(struct triangulo tri){
    printf("Coordenada de los vertices del triangulo");
    printf("Punto 1\n");
    printf("X: %i\n", tri.punto1.x);
    printf("Y: %i\n", tri.punto1.y);
    printf("Punto 2\n");
    printf("X: %i\n", tri.punto2.x);
    printf("Y: %i\n", tri.punto2.y);
    printf("Punto 3\n");
    printf("X: %i\n", tri.punto3.x);
    printf("Y: %i\n", tri.punto3.y);
}

int main(){
    struct triangulo triangulo1;

    triangulo1 = cargar();
    imprimir(triangulo1);

    getch();
    return 0;
}
