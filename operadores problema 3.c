//Ejercicio 3: Sacar la hipotenusa de un triángulo rectángulo, pidiendo al usuario el valor de los 2 catetos.

#include <stdio.h>
#include <math.h>

int main() {
	//Definiedo las variables
	float cateto1,cateto2,hipotenusa;
	
	//Mensaje
	printf("Ingrese los dos catetos del triangulo: ");
	//Entrada para ingresar los dos catetos
	scanf("%f %f", &cateto1,&cateto2);
	
	//Hallando la hipotenusa
	hipotenusa =sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	//Imprimiendo el resultado
	printf("\nLa hpotenusa del triangulo es: %.2f", hipotenusa);
	
	return 0;
}