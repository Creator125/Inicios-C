/*
En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en estructuras paralelas)

b) Realizar un listado que muestre los nombres, notas y condición del alumno. 
En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la 
nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.

c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.

https://www.youtube.com/watch?v=iDbdygP4WMY&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=127
*/
#include <stdio.h>

void cargarDatos(char nombres[4][20], int numeros[4]){

  for (int f = 0; f < 4; f++){ //Ingresando los datos
    printf("Ingrese el nombre del alumno: ");
    gets(nombres[f]);
    printf("Ingrese la nota del alumno: ");
    scanf("%i",&numeros[f]);

    fflush(stdin);
    printf("\n");
  }
}


void imprimirEstado(char nombres[4][20], int numeros[4]){
    printf("Estado de alumnos:\n");

    for (int f = 0; f < 4; f++){
        printf("\n%s \nCalificacion: %i\n",nombres[f],numeros[f]);

        if (numeros[f] >= 8){
            printf("Condicion: Muy bueno\n");
        }else if (numeros[f] >= 4 && numeros[f] <= 7){
          printf("Condicion: Bueno\n");
        }else{ //La nota es menor a 4
          printf("Condicion: Insuficiente\n");
        }
    }
}


void imprimirBuenaNota(int numeros[4]){
  int contador = 0;

  for (int f = 0; f < 4; f++){
    if (numeros[f] >= 8){ //Contando los alumnos que tiene una buena calificacion
      contador++;
    }
  }
  
  printf("\nCantidad de alunmos con la condicion de 'Muy bueno': %i\n",contador);
}


int main(){
    char alumnos[4][20];
    int notas[4];

    cargarDatos(alumnos,notas);
    imprimirEstado(alumnos,notas);
    imprimirBuenaNota(notas);

    return 0;
}
