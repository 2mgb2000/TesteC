#include <stdio.h>

int main() {
    int numeros[8];
    int pares = 0, impares = 0;
    int maior, menor, soma = 0;
    int procurar, encontrado = 0;

    printf("=== CONTADOR DE NUMEROS ===\n");

    // Ler numeros
    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Inicializar maior e menor
    maior = menor = numeros[0];

    // Analisar numeros
    for (int i = 0; i < 8; i++) {
        // Contar pares e impares
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Encontrar maior e menor
        if (numeros[i] > maior) maior = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    // Mostrar resultados
    printf("\n=== ANALISE ===\n");
    printf("Numeros inseridos: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Soma total: %d\n", soma);

    // Procurar numero
    printf("\nQue numero quer procurar? ");
    scanf("%d", &procurar);

    for (int i = 0; i < 8; i++) {
        if (numeros[i] == procurar) {
            printf("Numero %d encontrado na posicao %d!\n", procurar, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Numero %d nao encontrado.\n", procurar);
    }

    return 0;
}