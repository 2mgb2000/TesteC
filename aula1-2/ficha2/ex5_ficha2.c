#include <stdio.h>

int main() {
    int numero, contador = 0, positivos = 0, negativos = 0;
    int maior, menor, primeiro = 1;
    float soma = 0.0, media;

    printf("=== ANALISE DE NUMEROS ===\n");
    printf("Digite numeros (0 para terminar):\n");

    while (1) {
        printf("Numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        contador++;
        soma += numero;

        // Inicializar maior e menor com o primeiro número
        if (primeiro) {
            maior = numero;
            menor = numero;
            primeiro = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }

        // Classificar como positivo ou negativo
        if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    if (contador > 0) {
        media = soma / contador;

        printf("\n=== RESULTADOS ===\n");
        printf("Numeros inseridos: %d\n", contador);
        printf("Numeros positivos: %d\n", positivos);
        printf("Numeros negativos: %d\n", negativos);
        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
        printf("Soma total: %.0f\n", soma);
        printf("Media: %.2f\n", media);

        if (media > 0) {
            printf("A media e POSITIVA\n");
        } else if (media < 0) {
            printf("A media e NEGATIVA\n");
        } else {
            printf("A media e ZERO\n");
        }
    } else {
        printf("Nenhum numero foi inserido.\n");
    }

    return 0;
}//
// Created by 2mgb2000 on 02/09/2025.
//