#include <stdio.h>

int main() {
    int a, b;

    printf("Introduza dois números: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão inteira: %d\n", a / b);
    printf("Resto da divisão: %d\n", a % b);

    return 0;
}
