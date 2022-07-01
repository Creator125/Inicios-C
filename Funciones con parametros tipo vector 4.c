/*
Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de 5 personas.
Desarrollar las siguientes funciones:
1-Carga del vector.
2-Retornar el promedio del vector.
float calcularPromedio(float alturas[5])
3-Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas.
void altasBajas(float alturas[5],float pro)

https://www.youtube.com/watch?v=G5dH8mQ9GlI&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=106
*/
#include <stdio.h>

void cargarVector(float alturas[5]) //funcion para cargar las alturas de las personas
{
    for (int i = 0; i < 5; i++){
        printf("Ingrese la altura del usuario: ");
        scanf("%f",&alturas[i]);
    }
    
}


float calcularPromedio(float alturas[5])  //funcion para calcular el promedio de las alturas
{
    float promedio;

    for (int i = 0; i < 5; i++){
        promedio += alturas[i] / 5; 
    }
    
    return promedio;
}


void altasBajas(float alturas[5],float pro) //Funcion que contará la cantida de personas más altas o bajas que el promedio
{
    pro = calcularPromedio(alturas);
    int altas=0,bajas=0;

    for (int i = 0; i < 5; i++){ //Contando las alturas baja o altas que el promedio
        if (alturas[i] > pro){
            altas++;
        }else{
            bajas++;
        }
    }
    
    printf("Alturas mas altas que el promedio: %i\n",altas);
    printf("Alturas mas bajas que el promedio: %i\n",bajas);
}

int main() //Funcio principal
{
    float altura[5];
    
    cargarVector(altura); //Almacenando los datos en el vector

    printf("Altura promedio: %.2f\n",calcularPromedio(altura)); //Imprimiendo el promedio del vector

    float promedio = calcularPromedio(altura);

    altasBajas(altura,promedio); //Imprimiendo la alturas más altas y bajas que el promedio
    
    return 0;
}