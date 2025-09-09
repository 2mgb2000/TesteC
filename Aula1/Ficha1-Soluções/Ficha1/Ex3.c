#include <stdio.h>

int main() {
    int n;

    printf("Introduza um número: ");
    scanf("%d", &n);

    printf("Número original: %d\n", n);
    printf("Pós-incremento: %d\n", n++);
    printf("Agora n = %d\n", n);
    printf("Pré-incremento: %d\n", ++n);

    return 0;
}
