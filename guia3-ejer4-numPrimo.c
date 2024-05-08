#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool numprimo(int num){
    if (num <= 1){
        return false;
    }
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    fflush(stdout);
    if (numprimo(num) == 1){
        printf("El numero %d es primo", num);
    }
    else{
        printf("El numero %d no es primo", num);
    }
    getchar();
    return 0;
}
/*
Escriba una función entera que determine si un número es primo. Desarrolle un programa principal donde se 
ingrese un número y se invoque a la función creada.
*/