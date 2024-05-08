#include <stdio.h>
#include <stdlib.h>
int minimo(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    if (b < a && b < c)
    {
        return b;
    }
    if (c < a && c < b)
    {
        return c;
    }
}
int maximo(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > a && b > c)
    {
        return b;
    }
    if (c > a && c > b)
    {
        return c;
    }
}

int main()
{
    int a, b, c;
    printf("ingrese un numero: ");
    scanf("%d", &a);
    fflush(stdout);
    printf("ingrese segundo numero: ");
    scanf("%d", &b);
    fflush(stdout);
    printf("ingrese tercer numero: ");
    scanf("%d", &c);
    fflush(stdout);
    printf("el minimo es: %d\n", minimo(a, b, c));
    printf("el maximo es: %d\n", maximo(a, b, c));
    getchar();
    return 0;
}
/*
Construya un programa que lea tres valores numéricos e imprima el valor mínimo y el máximo ingresado.
Para resolver este problema cree y utilice dos funciones: minimo y maximo.
*/