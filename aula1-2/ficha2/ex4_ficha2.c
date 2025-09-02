#include <stdio.h>

int main() {
    int numero_secreto = 42;  // Número fixo
    int tentativa, tentativas = 0;
    int acertou = 0;

    printf("=== JOGO DE ADIVINHAR ===\n");
    printf("Pensei num número entre 1 e 100!\n");
    printf("Tens 7 tentativas para acertar.\n\n");

    while (tentativas < 7 && acertou == 0) {
        tentativas++;
        printf("Tentativa %d: ", tentativas);
        scanf("%d", &tentativa);

        if (tentativa == numero_secreto) {
            printf("🎉 PARABÉNS! Acertaste!\n");
            printf("Precisaste de %d tentativas.\n", tentativas);
            acertou = 1;
        } else if (tentativa < numero_secreto) {
            printf("Muito baixo! Tenta um número maior.\n");
        } else {
            printf("Muito alto! Tenta um número menor.\n");
        }

        // Dica na 3ª tentativa
        if (tentativas == 3 && acertou == 0) {
            printf("💡 Dica: O número é par!\n");
        }
    }

    if (acertou == 0) {
        printf("Game Over! O número era %d\n", numero_secreto);
    }

    return 0;
}//
// Created by 2mgb2000 on 02/09/2025.
//