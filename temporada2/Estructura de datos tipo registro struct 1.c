/*
Declarar un registro que permita almacenar el codigo, 
descripcion y precio de un producto. Luego definir 
dos variables de dicho tipo, cargarlas e imprimir el 
nombre del producto que tiene mayor precio. 
 
 https://www.youtube.com/watch?v=XG0aSrqqcdY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=134&pp=iAQB
 */
# include <stdio.h>

struct producto{ //Definiendo la estructura
    int codigo;
    char descripcion[50];
    float precio;
};


int main(){
    struct producto prod1, prod2;
    
    //Ingresando los datos del primer registro
    printf("Ingrese el codigo del procuto: ");
    scanf("%i", &prod1.codigo);
    fflush(stdin);

    printf("Ingrese la descripcion: ");
    gets(prod1.descripcion);

    printf("Ingrese el precio del procuto: ");
    scanf("%f", &prod1.precio);


    printf("\n");

    //Ingresando los datos del segundo registro
    printf("Ingrese el codigo del procuto: ");
    scanf("%i", &prod2.codigo);
    fflush(stdin);

    printf("Ingrese la descripcion: ");
    gets(prod2.descripcion);

    printf("Ingrese el precio del procuto: ");
    scanf("%f", &prod2.precio);

    printf("\n");

    //Verificando cual de los dos prodcutos es mayor o si son iguales
    if(prod1.precio > prod2.precio){
        printf("El producto %s tiene un precio mayor",prod1.descripcion);
    }else if(prod2.precio > prod1.precio){
        printf("El producto %s tiene un precio mayor",prod2.descripcion);
    }else{
        printf("Los dos productos tiene un igual precio");
    }

    getch();
    
    return 0;
}
