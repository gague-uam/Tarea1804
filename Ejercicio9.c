/* 9.	Programa que permita leer el valor correspondiente
 a una distancia en kilómetros y las visualice 
 expresadas en metros. Utiliza una función.*/

 #include <stdio.h>

 int conversion(int km);

 int main(int argc, char const *argv[])
 {
    int km, metros;
    printf("Ingrese los kilometros: ");
    scanf("%i", &km);
    metros = conversion(km);
    printf("Su conversion de km a metros es: %i", metros);

    return 0;
 }
 
 int conversion(int km){
    return km * 1000;
 }