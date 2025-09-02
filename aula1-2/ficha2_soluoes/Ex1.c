#include <stdio.h>

int main() {
    int inicio, fim, contador = 0;
    
    printf("=== CONTADOR DE NÚMEROS PARES ===\n");
    printf("Número inicial: ");
    scanf("%d", &inicio);
    printf("Número final: ");
    scanf("%d", &fim);
    
    // Trocar se estiverem ao contrário
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }
    
    printf("\nNúmeros pares entre %d e %d:\n", inicio, fim);
    
    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            contador++;
        }
    }
    
    printf("\n\nTotal de números pares: %d\n", contador);
    
    return 0;
}