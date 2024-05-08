#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int digito(int num)
{
    int cont = 0;
    while (num > 0)
    {
        num = num / 10;
        cont++;
    }
    return cont;
}
int main()
{
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    fflush(stdout);
    printf("El numero %d tiene %d digitos\n", num, digito(num));
    getchar();
    return 0;
}
/*
Escriba una función de tipo entero que, dado un número entero determine qué cantidad de dígitos tiene.
*/