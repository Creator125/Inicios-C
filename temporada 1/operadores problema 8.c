//Ejercicio 8: Dadas las horas trabajadas de una persona y el valor por hora. Calcular su salario e imprimirlo

#include <stdio.h>

int main(){
    //Definiendo las variables
    int horas_trabajadas;
    float pago_horas,pago_total;

    //Salida y entrada para las horas trabajas
    printf("Horas trabajadas: "); scanf("%d",&horas_trabajadas);
    //Salida y entrda para el pago por hora
    printf("Pago por horas: "); scanf("%f",&pago_horas);

    //Operacion para el salario total
    pago_total = pago_horas * horas_trabajadas;

    //Imprimiendo el resultado
    printf("Sueldo total: $%.2f",pago_total);
    
    return 0;
}
