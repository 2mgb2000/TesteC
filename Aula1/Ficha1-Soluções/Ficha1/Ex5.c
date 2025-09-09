#include <stdio.h>

int main() {
    int x, y;

    printf("Introduza dois números: ");
    scanf("%d %d", &x, &y);

    printf("x maior que y? %d\n", x > y);
    printf("x menor ou igual a y? %d\n", x <= y);
    printf("x igual a y ou x maior que 10? %d\n", (x == y || x > 10));
    printf("x menor que 20 e y maior que 5? %d\n", (x < 20 && y > 5));

    return 0;
}
