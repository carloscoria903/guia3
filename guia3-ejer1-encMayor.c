#include <stdio.h>
#include <stdlib.h>
int numeromayor(int num1, int num2)
{
    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    fflush(stdout);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    fflush(stdout);
    printf("El numero mayor es: %d", numeromayor(num1, num2));
    getchar();
    return 0;
}
/*
Escriba una función de tipo entero que, dados dos números enteros encuentre el mayor.
Si son iguales devolver cualquiera de ellos. Imprimir resultado.
*/