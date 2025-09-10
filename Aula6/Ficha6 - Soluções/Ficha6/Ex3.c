#include <stdio.h>

int main() {
    float notas[5];
    float soma = 0, media;
    float melhor, pior;

    printf("=== CALCULADORA DE MEDIA ===\n");

    // Ler notas com validacao
    for (int i = 0; i < 5; i++) {
        do {
            printf("Nota %d: ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0 || notas[i] > 20) {
                printf("Nota invalida! Use valores entre 0 e 20.\n");
            }
        } while (notas[i] < 0 || notas[i] > 20);

        soma += notas[i];
    }

    // Calcular media
    media = soma / 5;

    // Encontrar melhor e pior
    melhor = pior = notas[0];
    for (int i = 1; i < 5; i++) {
        if (notas[i] > melhor) melhor = notas[i];
        if (notas[i] < pior) pior = notas[i];
    }

    // Mostrar resultados
    printf("\n=== RESULTADOS ===\n");
    printf("Notas inseridas: ");
    for (int i = 0; i < 5; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");

    printf("Media: %.1f\n", media);
    printf("Melhor nota: %.1f\n", melhor);
    printf("Pior nota: %.1f\n", pior);

    if (media >= 10) {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
    
    return 0;
}