#include <stdio.h>

int main() {
    int a, b, resultado;

    printf("Introduza o primeiro número: ");
    scanf("%d", &a);

    printf("Introduza o segundo número: ");
    scanf("%d", &b);

    resultado = a + b;
    resultado++; // incrementa

    printf("Resultado da soma incrementada: %d\n", resultado);

    return 0;
}
