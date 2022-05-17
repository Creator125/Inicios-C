//Ejercicio 5: Hacer un Programa que calcule áreas de trapecios

#include <stdio.h>

int main(){
	//Definiendo las variables
	float base1,base2,altura,area;
	
	//Salida y entrada para las bases del trapecio
	printf("Ingrese la bases mayor y la base menor: ");
	scanf("%f %f", &base1,&base2);
	
	//Salida y entrada para la altura del trapecio
	printf("Ingrese la altura: ");
	scanf("%f",&altura);
	
	//Hallando el area del trapecio
	area = ((base1 + base2) * altura) / 2;
	
	//Imprimiendo el area del trapecio
	printf("\nEl area del trapecio es: %.2f",area);

	return 0;
	
}