/* 5.Dadas las horas trabajadas de una persona y
el valor por hora.  Calcular su salario y visualizarlo.
Utilizar una función para el cálculo del salario,
la cual recibe los datos leídos desde el programa principal.*/

#include <stdio.h>

int salario(int horas, int valor);

int main(int argc, char const *argv[])
{
    int horas, valor;
    printf("Digite las horas que trabaja: ");
    scanf("%i", &horas);
    printf("Digite el valor en dolares que tiene cada hora de trabajo: ");
    scanf("%i", &valor);

    printf("Su salario sera de %i en dolares", salario(horas, valor));

    return 0;
}

int salario(int horas, int valor)
{
    return horas * valor;
}