#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool esDigito(char carac){
    if(carac >= '0' && carac <= '9'){
        return true;
    } else{
        return false;
    }
}
int main()
{
    char carac;
    printf("Ingrese un caracter: ");
    scanf("%c", &carac);
    fflush(stdout);
    if(esDigito(carac)){
        printf("El caracter %c es un digito", carac);
    } else{
        printf("El caracter %c no es un digito", carac);
    }
    getchar();
    return 0;
}
/*
Escriba una función booleana esDigito que determine si un carácter es uno de los dígitos del 0 al 9.
*/