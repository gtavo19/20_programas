#include <stdio.h>
#include <stdlib.h>
#include<iostream>
int es_palindromo(int numero);
int cuenta_digitos(int numero);

int main() {
    int numero;
    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);

    numero = abs(numero);
    if (es_palindromo(numero))
        printf("El n�mero es pal�ndromo");
    else
        printf("El n�mero no es pal�ndromo");
        return 0;
} 
