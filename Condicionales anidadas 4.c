/* Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: 
cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente. 
Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo 
según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:

	Nivel máximo:	Porcentaje>=90%.
	Nivel medio:	Porcentaje>=75% y <90%.
	Nivel regular:	Porcentaje>=50% y <75%.
	Fuera de nivel:	Porcentaje<50%.
*/

#include <stdio.h>

int main()
{
    int total_preguntas,preg_correctas,porcentaje;

    printf("Ingrese cantidad de prguntas realizadas: ");
    scanf("%i",&total_preguntas); //Total de preguntas
    printf("Ingrese cantidad de prguntas correctas: ");
    scanf("%i",&preg_correctas); //Total de preguntas correctas

    porcentaje = (preg_correctas * 100) /total_preguntas;

    //Verificando el porcentaje del postulante
    if (porcentaje >= 90){
        printf("\nNivel maximo\n");
    }else if ((porcentaje >= 75) && (porcentaje < 90)){
        printf("\nNivel medio\n");
    }else if ((porcentaje >= 50) && (porcentaje < 75)){
        printf("\nNivel regular\n");
    }else{
        printf("\nFuera de nivel\n");
    }
    
    return 0;
}
