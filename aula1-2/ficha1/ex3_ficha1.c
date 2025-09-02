#include <stdio.h>

int main() {
    int numero;

    printf("O numero: ");
    scanf("%d", &numero);

    printf("Nunero: %d\n", numero);
    printf("Pos-incremento: %d\n", numero++);
    printf("Numero incrementado: %d\n", numero);
    printf("Pre-incremento: %d\n", ++numero);

    return 0;
}

// Created by 2mgb2000 on 02/09/2025.
//