#include <stdio.h>

int main() {
    int idades[15];
    int num_pessoas;
    
    printf("=== ANÁLISE DE IDADES ===\n");
    printf("Quantas pessoas quer registar (max 15)? ");
    scanf("%d", &num_pessoas);
    
    if (num_pessoas > 15) {
        num_pessoas = 15;
        printf("Limitado a 15 pessoas.\n");
    }
    
    // Ler idades com validação
    for (int i = 0; i < num_pessoas; i++) {
        do {
            printf("Idade da pessoa %d: ", i + 1);
            scanf("%d", &idades[i]);
            if (idades[i] < 0 || idades[i] > 120) {
                printf("Idade inválida! Deve estar entre 0 e 120 anos.\n");
            }
        } while (idades[i] < 0 || idades[i] > 120);
    }
    
    // Mostrar todas as idades
    printf("\n=== IDADES REGISTADAS ===\n");
    for (int i = 0; i < num_pessoas; i++) {
        printf("Pessoa %d: %d anos\n", i + 1, idades[i]);
    }
    
    // Calcular estatísticas
    int soma = 0;
    int mais_nova = idades[0], mais_velha = idades[0];
    int menores = 0, idosos = 0, adultos = 0;
    
    for (int i = 0; i < num_pessoas; i++) {
        soma += idades[i];
        
        if (idades[i] < mais_nova) mais_nova = idades[i];
        if (idades[i] > mais_velha) mais_velha = idades[i];
        
        if (idades[i] < 18) menores++;
        else if (idades[i] >= 65) idosos++;
        else adultos++;
    }
    
    float media = (float)soma / num_pessoas;
    
    printf("\n=== ESTATÍSTICAS ===\n");
    printf("Idade média: %.1f anos\n", media);
    printf("Pessoa mais nova: %d anos\n", mais_nova);
    printf("Pessoa mais velha: %d anos\n", mais_velha);
    printf("Menores de idade (< 18): %d pessoas\n", menores);
    printf("Idosos (≥ 65): %d pessoas\n", idosos);
    printf("Adultos (18-64): %d pessoas\n", adultos);
    
    return 0;
}