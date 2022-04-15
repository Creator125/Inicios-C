//Ejercicio 4: Hacer un Programa que calcule longitudes de Circunferencia. (Propuesto).
//Formula para hallar la longitud: 2 * Radio * PI


#include <stdio.h>


int main() {
	//Definiendo las variables
	float longitud,radio;
	//Definiendo la constante
	const PI = 3.14;
	
	//Mensaje
	printf("Ingrese el radio: ");
	//Entrada para ingresar el radio
	scanf("%f",&radio);
	
	//Hallando la longitud de la circuferencia
	longitud = 2 * radio * PI;
	
	//Imprimiendo la longitud de la circuferencia
	printf("\nLa logintud de la cicuferncia es: %.2f",longitud);
	
	return 0;
}