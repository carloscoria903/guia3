#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool bisiesto(int anio)
{
    if ((anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int anio;
    printf("ingrese un año: ");
    scanf("%d", &anio);
    fflush(stdin);
    if (bisiesto(anio))
    {
        printf("%d es año bisiesto", anio);
    }
    else
    {
        printf("%d no es año bisiesto", anio);
    }

    getchar();
    return 0;
}
/*
Escriba una función que devuelva Verdadero cuando un año es bisiesto y Falso cuando no lo sea.
*/