//Ejercicio 1: Pedir 2 números al usuario y sumarlos, restarlos, multiplicarlos y dividirlos

#include <stdio.h>

int main(){
	//Definiendo los datos
	int num1,num2,suma,resta;
	float multi,divi;
	
	//Mensaje
	printf("Ingrese dos numeros: \n");
	//Entradas para los dos valores
	scanf("%i %i", &num1,&num2);
	
	//Asignando las operaciores
	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;
	
	//Imprimiendo los resultados
	printf("\n Suma: %i",suma);
	printf("\n Resta: %i",resta);
	printf("\n Multiplicacion: %.2f",multi);
	printf("\n Division: %.2f",divi);
	
	return 0;
}