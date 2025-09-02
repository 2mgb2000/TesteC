#include <stdio.h>

int main() {
    int x, y;

    printf("Introduza dois números: ");
    scanf("%d %d", &x, &y);

    printf("Pelo menos um positivo? %d\n", (x > 0 || y > 0));
    printf("Ambos positivos? %d\n", (x > 0 && y > 0));

    return 0;
}
