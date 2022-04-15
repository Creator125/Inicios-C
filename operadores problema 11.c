//Ejercicio 11: Calcular la cantidad de segundos que están incluidos en el número de horas, minutos y segundos ingresados por el usuario.

#include <stdio.h>

int main(){
    //Definiendo las variables
    int hora,minuto,segundo,t1,t2,t3,total;

    //Entradas y salidas
    printf("Ingrese la hora: "); 
    scanf("%i",&hora);
    printf("Ingrese los minutos: "); 
    scanf("%i",&minuto);
    printf("Ingrese los segundos: "); 
    scanf("%i",&segundo);

    //Realizando las operaciones
    t1 = hora * 3600;
    t2 = minuto * 60;
    t3 = segundo * 1;
    //Encontrando el total
    total = t1 + t2 + t3;

    //Inprimiendo el resultado
    printf("El equivalesnte en segundo total es: %i",total);

    return 0;
}

