#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Introduza dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("O primeiro numero e maior que o segundo numero %d\n", numero1 > numero2);
    printf("O primeiro numero e menor ou igual que o segundo numero %d\n", numero1 <= numero2);
    printf("O primeiro numero e igual ao segundo numero ou maior que 10 %d\n", (numero1 == numero2 || numero1 > 10));
    printf("O primeiro numero e menor que 20 e o segundo numero e maior que 5 %d\n", (numero1 < 20 && numero2 > 5));

    return 0;
}
//
// Created by 2mgb2000 on 02/09/2025.
//