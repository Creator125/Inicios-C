/*
Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.

https://www.youtube.com/watch?v=I4-d5DWKWgI&list=PLIygiKpYTC_6zHLTjI6cFIRZm1BCT3CuV&index=59
*/

#include <stdio.h>

int main()
{
    float altura[5],promedio,suma=0;
    int alturas_altas=0,alturas_bajas=0,i;

    for (i = 0; i < 5; i++){ //Almacenando las alturas
        printf("Ingrese la altura de la persona #%i: ",i);
        scanf("%f",&altura[i]); 
    }
    for (i = 0; i < 5; i++){ //Acumulando la suma total de las alturas
        suma += altura[i];
    }
    
    promedio = suma / 5; //Obteniendo el promedio de las alturas

    for (i = 0; i < 5; i++){ //Contando las alturas menores y mayores al promedio
        if (altura[i] > promedio){ //Alturas mayores al promedio
            alturas_altas++;
        }else{ //Alturas menores al promedio
            alturas_bajas++;
        }
    }

    printf("\nPromedio de alturas: %.2f\n",promedio);
    printf("Alturas mas altas que el promedio: %i\n",alturas_altas);
    printf("Alturas mas bajas que el promedio: %i\n",alturas_bajas);

    return 0;
}