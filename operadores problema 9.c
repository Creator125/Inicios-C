//Ejercicio 9: Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.

#include <stdio.h>

int main(int argc, char const *argv[]){
    //Definiendo las variables
    float salario,inclemento,salario_total;

    //Salida y entrada para el sueldo del obrero
    printf("Salario del obrero: $");
    scanf("%f",&salario);

    //Realizando la operancion para el salario
    inclemento = salario * 0.25;
    //Opteniendo el salario total
    salario_total = salario + inclemento;

    //Imprimiendo el resultado
    printf("El sueldo total del obrero es: $%.2f",salario_total);

    return 0;
}
