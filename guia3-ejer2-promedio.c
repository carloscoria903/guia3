#include <stdio.h>
#include <stdlib.h>
float promedio(float num1, float num2, float num3, float num4)
{
    return (num1 + num2 + num3 + num4) / 4.0;
}
int main()
{
    float num1, num2, num3, num4;
    printf("ingrese el primer numero: ");
    scanf("%f", &num1);
    fflush(stdout);
    printf("ingrese el segundo numero: ");
    scanf("%f", &num2);
    fflush(stdout);
    printf("ingrese el tercer numero: ");
    scanf("%f", &num3);
    fflush(stdout);
    printf("ingrese el cuarto numero: ");
    scanf("%f", &num4);
    fflush(stdout);
    printf("el promedio es: %.2f", promedio(num1, num2, num3, num4));

    getchar();
    return 0;
}
/*
Escriba una función que tome como parámetros cuatro valores enteros y
calcule y retorne el promedio, que debe ser decimal.
*/