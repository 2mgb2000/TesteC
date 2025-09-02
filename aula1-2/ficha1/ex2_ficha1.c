#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("O primeiro numero: ");
    scanf("%d", &numero1);

    printf("O segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > 0 || numero2 > 0) {
        printf("Um dos numeros e positivo");
    } else if (numero1 > 0 && numero2 > 0) {
        printf("Dois numeros sao positivos");
    }

    return 0;
}

// Created by 2mgb2000 on 02/09/2025.
//