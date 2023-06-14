/*
Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos precios en un vector paralelo de tipo float.
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se debe contar) 

https://www.youtube.com/watch?v=ckRUB9qumlQ&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=126
*/
#include <stdio.h>

void cargarDatos(char nombres[5][20], float numeros[5]){

  for (int f = 0; f < 5; f++){ //Ingresando los datos
    printf("Ingrese el nombre del producto: ");
    gets(nombres[f]);
    printf("Ingrese el precio del producto: $");
    scanf("%f",&numeros[f]);

    fflush(stdin);
    printf("\n");
  }
}

void imprimirDatos(char nombres[5][20], float numeros[5]){
    printf("Productos y precios: \n");

    for (int f = 0; f < 5; f++){ //Imprimiedo el producto con su precio
        printf("%s : %1.f\n",nombres[f],numeros[f]);
    }
}


void precioMayor(float numeros[5]){
    int contador=0;

    for (int f = 0; f < 5; f++){ //Contando los productos mayores al primero
        if (numeros[f] > numeros[0]){
            contador++;
        }
        
    }
    
    printf("\nCatidad de productos con precios mayores al primero: %i\n",contador);
}


int main(){
    char productos[5][20];
    float precios[5];

    cargarDatos(productos,precios);
    imprimirDatos(productos,precios);
    precioMayor(precios);

    return 0;
}