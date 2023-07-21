/*
Se tienen las siguientes declaraciones de registros:

struct fecha {
    int dd;
    int mm;
    int aa;
};

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
};

Definir un vector de 3 elementos de tipo producto, realizar su carga e impresión.

https://www.youtube.com/watch?v=OTG15_XwoaQ&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=140&pp=iAQB
*/
#include  <stdio.h>

#define SIZE 3

struct fecha {
    int dd;
    int mm;
    int aa;
};

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
};

void cargar(struct producto vec[SIZE]){
    for (int f = 0; f < SIZE; f++){
        printf("Ingrese el codigo del producto #%i: ",f+1);
        scanf("%i", &vec[f].codigo);
        fflush(stdin);

        printf("Ingrese la descripcion del producto #%i: ",f+1);
        gets(vec[f].descripcion);

        printf("Ingrese el precio del producto #%i: ",f+1);
        scanf("%f", &vec[f].precio);
        fflush(stdin);

        printf("Ingrese la fecha de vencimeinto del producto #%i\n: ",f+1);
        //Decrarando la estructura anidada
        printf("Dia: ");
        scanf("%i", &vec[f].fechavencimiento.dd);
        printf("Mes: ");
        scanf("%i", &vec[f].fechavencimiento.mm);
        printf("Anio: ");
        scanf("%i", &vec[f].fechavencimiento.aa);

        printf("\n");
    }
    printf("\n");
}

void imprimir(struct producto vec[SIZE]){
    for (int f = 0; f < SIZE; f++){
        printf("%i %s %0.2f %i/%i/%i\n", vec[f].codigo, vec[f].descripcion, vec[f].precio, 
              vec[f].fechavencimiento.dd, vec[f].fechavencimiento.mm, vec[f].fechavencimiento.aa);
    }
}

int main(){
    struct producto vec[SIZE];

    cargar(vec);
    imprimir(vec);

    getch();
    return 0;
}
