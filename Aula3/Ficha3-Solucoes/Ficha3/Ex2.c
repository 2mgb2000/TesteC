#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int vogais = 0, consoantes = 0;

    printf("=== CONTADOR DE CARACTERES ===\n");
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    // Contar vogais e consoantes
    for (int i = 0; i < tamanho; i++) {
        char c = palavra[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vogais++;
            } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                consoantes++;
            }
    }

    printf("\n=== RESULTADOS ===\n");
    printf("Caracteres: %d\n", tamanho);
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    printf("\nCaracteres da palavra:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Posicao %d: %c\n", i, palavra[i]);
    }

    return 0;
}