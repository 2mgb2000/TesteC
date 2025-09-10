// Exercicio 1: Primeiro Array
#include <stdio.h>

int main() {
    float temperaturas[3];  // 3 dias
    printf("=== TEMPERATURAS DE 3 DIAS ===\n");
    // Ler temperaturas
    for (int i = 0; i < 3; i++) {
        printf("Temperatura do dia %d: ", i+1);
        scanf("%f", &temperaturas[i]);
    }
    // Mostrar temperaturas 
    printf("\nTemperaturas inseridas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Dia %d: %.2f graus\n", i+1, temperaturas[i]);
    }
    // Encontrar temperatura mais alta
    float mais_alta = temperaturas[0];
    int dia_mais_quente = 1;
    for (int i = 1; i < 3; i++) {
        if (temperaturas[i] > mais_alta) {
            mais_alta = temperaturas[i];
            dia_mais_quente = i + 1;
        }
    }
    printf("\nTemperatura mais alta: %.2f graus (dia %d)\n",
           mais_alta, dia_mais_quente);

    // Calcular temperatura média
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += temperaturas[i];
    }
    float media = (float)soma / 3;

    printf("Temperatura media: %.1f graus\n", media);

    return 0;
}