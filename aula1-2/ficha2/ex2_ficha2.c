#include <stdio.h>

int main() {
    int num_notas, aprovados = 0, reprovados = 0;
    float nota, soma = 0.0, media;

    printf("Introduza numero de notas ");
    scanf("%d", &num_notas);

    for (int i = 1; i <= num_notas; i++) {
        do {
            printf("Nota %d (0-20): ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 20) {
                printf("Nota invalida! Digite novamente.\n");
            }
        } while (nota < 0 || nota > 20);

        soma += nota;

        if (nota >= 10.0) {
            aprovados++;
            printf("Aprovado\n");
        } else {
            reprovados++;
            printf("Reprovado\n");
        }
    }

    media = soma / num_notas;

    printf("Media da turma: %.1f\n", media);
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}//
// Created by 2mgb2000 on 02/09/2025.
//