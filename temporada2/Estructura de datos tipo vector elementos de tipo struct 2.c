/*
Se tiene la siguiente declaración de registro:
struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};
Definir un vector de cuatro elementos de tipo libro.
Codificar las funciones:
1-Carga del vector.
2-Listado completo.
3-Ingresar por teclado un nombre de autor y luego mostrar todos los títulos de libros que ha escrito o un mensaje si no tiene.

https://www.youtube.com/watch?v=Xe9VZ0VxhqE&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=139&pp=iAQB
*/
#include <stdio.h>
#include <string.h>

#define SIZE 4

struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};

void cargar(struct libro vec[SIZE]){
    for (int f = 0; f < SIZE; f++){
        printf("Ingrese el codigo del libro #%i: ",f+1);
        scanf("%i", &vec[f].codigo);
        fflush(stdin);

        printf("Ingrese la titulo del libro #%i: ",f+1);
        gets(vec[f].titulo);

        printf("Ingrese el autor del libro #%i: ",f+1);
        gets(vec[f].autor);

        printf("\n");
    }
    printf("\n");
}


void listar(struct libro vec[SIZE]){
    for (int f = 0; f < SIZE; f++){
        printf("%i %s, %s\n", vec[f].codigo, vec[f].titulo, vec[f].autor); 
    }
    printf("\n");
}

void buscarTitulosPorAutor(struct libro vec[SIZE]){
    char buscarAutor[40];
    int cantLibros = 0;

    printf("Ingrese el nombre del autor para buscar titulos: ");
    gets(buscarAutor);

    printf("Titulos de %s: \n", buscarAutor);
    for (int f = 0; f < SIZE; f++){
        if (strcmp(buscarAutor, vec[f].autor)== 0){
            printf("%i. %s\n", f+1, vec[f].titulo);
            cantLibros += 1;
        }
    }
    
    if (cantLibros == 0){ //En caso de que el autor ingresado no tiene libos escritos
        printf("No hay libros de ese autor");
    }
    
    printf("\n");
}

int main(){
    struct libro libros[SIZE];

    cargar(libros);
    listar(libros);
    buscarTitulosPorAutor(libros);

    getch();
    return 0;
}
