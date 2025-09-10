#include <stdio.h>

int main() {
    int tabela[5][5];
    
    // Preencher matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabela[i][j] = (i + 1) * (j + 1);
        }
    }
    
    // Mostrar tabela formatada
    printf("=== TABELA DE MULTIPLICACAO ===\n");
    printf("    ");
    for (int j = 0; j < 5; j++) {
        printf("%4d", j + 1);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%2d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%4d", tabela[i][j]);
        }
        printf("\n");
    }
    
    // Calcular soma total
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma += tabela[i][j];
        }
    }
    
    // Encontrar maior e menor
    int maior = tabela[0][0];
    int menor = tabela[0][0];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabela[i][j] > maior) maior = tabela[i][j];
            if (tabela[i][j] < menor) menor = tabela[i][j];
        }
    }
    
    printf("\nSoma total: %d\n", soma);
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    
    return 0;
}