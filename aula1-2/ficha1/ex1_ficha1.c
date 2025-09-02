#include <stdio.h>

int main() {
    int numero1, numero2, soma;

    printf("O primeiro numero: ");
    scanf("%d", &numero1);

    printf("O segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    soma++; // incrementa

    printf("Resultado: %d\n", soma);

    return 0;
}
//
// Created by 2mgb2000 on 02/09/2025.
//