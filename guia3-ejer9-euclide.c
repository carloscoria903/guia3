#include <stdio.h>
#include <stdlib.h>
int maxDivi(int a, int b)
{
    int resto;
    if (b > a)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    while (b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
int main()
{
    int num1, num2;
    printf("ingrese numero: ");
    scanf("%d", &num1);
    fflush(stdout);
    printf("ingrese otro numero: ");
    scanf("%d", &num2);
    fflush(stdout);
    int mcd = maxDivi(num1, num2);
    printf("El máximo común divisor de %d y %d es: %d\n", num1, num2, mcd);
    getchar();
    return 0;
}
/*
Diseñar un algoritmo que calcule el máximo común divisor de dos números mediante el algoritmo de Euclides.
Sean los dos números A y B. El método para hallar el máximo común divisor (mcd) de dos números A y B por el método de Euclides es:
a. Dividir el número mayor (A) por el menor (B). Si el resto de la división es cero, el número B es el máximo común divisor.
b. Si la división no es exacta, A toma el valor de B y B el resto de la división anterior.
c. Se siguen los pasos anteriores hasta obtener un resto cero. El último divisor es el mcd buscado.
*/