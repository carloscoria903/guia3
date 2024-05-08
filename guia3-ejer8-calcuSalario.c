#include <stdio.h>
#include <stdlib.h>
float salario(int hTrab, float preHora)
{
    float suelTotal;
    if (hTrab <= 40)
    {
        suelTotal = hTrab * preHora;
    }
    else
    {
        int hNormal = 40;
        int extras = hTrab - hNormal;
        suelTotal = (hNormal * preHora) + (extras * 1.5 * preHora);
    }
    return suelTotal;
}
int main()
{
    int hora;
    float sueldHora;
    printf("ingresar el numero de horas trabajadas: ");
    scanf("%d", &hora);
    fflush(stdout);
    printf("Ingresar salario por hora: ");
    scanf("%f", &sueldHora);
    fflush(stdout);
    printf("salario total es: %.1f\n", salario(hora, sueldHora));
    getchar();
    return 0;
}
/*
Escribir una función Salario que calcule los salarios de los trabajadores, para un número entero dado de horas trabajadas
y un salario por hora.
Las horas que superen las 40 horas semanales se pagarán como extras con un salario hora 1,5 veces el salario ordinario.
*/