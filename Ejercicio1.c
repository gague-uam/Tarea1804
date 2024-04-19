/* 1. Escribe un programa que permita convertir 
temperaturas Farenheit a gradis Celsius. Utilice
una funcion con parametros. */

#include <stdio.h>

float convertCel(int gradosF);
int main(int argc, char const *argv[])
{
    int tempF;
    float celsius;
    printf("Dime la temperatura en grados Fahrenheit y la convertire a celsius: ");
    scanf("%i", &tempF);

    celsius = convertCel(tempF);

    printf("Temperatura en grados celsius: %.2f", celsius);

    return 0;
}

float convertCel(int gradosF){
    return (gradosF-32)/1.8;
}