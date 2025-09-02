#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Introduza dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Multiplicacao: %d\n", numero1 * numero2);
    printf("Divisao: %d\n", numero1 / numero2);
    printf("Resto da divisao: %d\n", numero1 % numero2);

    return 0;
}
//
// Created by 2mgb2000 on 02/09/2025.
//