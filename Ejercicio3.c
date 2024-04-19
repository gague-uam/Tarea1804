/* 7.Programa para calcular el área y el perímetro 
de un rectángulo dada la base y la altura. 
Utilizar una función diferente por cada cálculo.*/

#include <stdio.h>

int area(int base, int altura);
int perimetro(int base, int altura);

int main(int argc, char const *argv[])
{
    int base, altura;

    printf("Digite la altura de un rectangulo: ");
    scanf("%i", &altura);
    printf("Digite la base de un rectangulo: ");
    scanf("%i", &base);

    printf("El perimetro del rectangulo es: %i\n", area(base, altura));
    printf("El area del rectangulo es: %i", perimetro(base, altura));

    return 0;
}

int area(int base, int altura){
    return base * altura;
}

int perimetro(int base, int altura){
    return (base + altura)*2;
}