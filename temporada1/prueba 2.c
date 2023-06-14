#include <stdio.h> 

int main(){
	 /*
	 Diccionario de los grados para este progama:
	 c: Celsius
	 f: Fahrenheit
	 */
	 
	 //Definiendo las variables
	 float c,f;
	 
	 //Mensaje
	 printf("Grados Celsius: ");
	 //Entrada donde se ingresará los grados Celsius
	 scanf("%f", &c);
	 
	 //formula de la conversion en accion
	 f = (18 * c) + 32;
	 
	 //Imprimiendo la conversion Fahrenheit
	 printf("\nFahrenheit: %.2f",f);
	
	return 0;
}