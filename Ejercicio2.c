/* 2.	Escriba el programa que realice las operaciones básicas 
(suma, resta, multiplicación y división), a partir de dos números 
enteros desconocidos. Utilizar una función diferente por cada operación. 
Utilizar función sin parámetros*/

#include <stdio.h>

int sumar();
int restar();
int multiplicar();
int dividir();

int main(int argc, char const *argv[])
{
    int opcion;
    printf("Bienvenido... \n");
    printf("Opcion 1: Sumar\n");
    printf("Opcion 2: Restar\n");
    printf("Opcion 3: Multiplicar\n");
    printf("Opcion 4: Dividir\n");
    printf("Opcion 5: Salir\n");

    printf("Elige una opcion: \n");
    scanf("%i", &opcion);

    if (opcion == 1)
    {
        printf("La suma es: %i\n", sumar());
    }
    else if (opcion == 2)
    {
        printf("La resta es: %i\n", restar());
    }
    else if (opcion == 3)
    {
       printf("La multiplicacion es: %i\n", multiplicar());
    }
    else if (opcion == 4)
    {
        printf("La division es: %i\n", dividir());
    }
    else if (opcion==5){ 
        printf("Adios...");
    }
    else 
    {
        printf("Opcion invalida, vuelva a intentarlo...");
    }
    if(opcion != 5)
    {
        main(0,0);
    }

    return 0;
}

  
int sumar(){
    int num1, num2;
    printf("Dime dos numeros: \n");
    printf("Primer numero... ");
    scanf("%i", &num1);
    printf("Segundo numero... ");
    scanf("%i", &num2);
    return num1 + num2;
}

int restar(){
    int num1, num2;
    printf("Dime dos numeros: \n");
    printf("Primer numero... ");
    scanf("%i", &num1);
    printf("Segundo numero... ");
    scanf("%i", &num2);
    return num1 - num2;
}

int multiplicar(){
    int num1, num2;
    printf("Dime dos numeros: \n");
    printf("Primer numero... ");
    scanf("%i", &num1);
    printf("Segundo numero... ");
    scanf("%i", &num2);
    return num1 * num2;
}

int dividir(){
    int num1, num2;
    printf("Dime dos numeros: \n");
    printf("Primer numero... ");
    scanf("%i", &num1);
    printf("Segundo numero... ");
    scanf("%i", &num2);
    if(num2>0) return num1 / num2;
    return 0;
}
