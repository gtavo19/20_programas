#include <stdio.h>
#include <stdlib.h>
#include<iostream>
int es_palindromo(int numero);
int cuenta_digitos(int numero);

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    numero = abs(numero);
    if (es_palindromo(numero))
        printf("El número es palíndromo");
    else
        printf("El número no es palíndromo");
        return 0;
} 
