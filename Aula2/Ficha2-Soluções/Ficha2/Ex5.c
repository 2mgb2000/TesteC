#include <stdio.h>

int main() {
    int numero, contador = 0, positivos = 0, negativos = 0;
    int maior, menor, primeiro = 1;
    float soma = 0.0, media;
    
    printf("=== ANÁLISE DE NÚMEROS ===\n");
    printf("Digite números (0 para terminar):\n");
    
    while (1) {
        printf("Número: ");
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
        printf("Números inseridos: %d\n", contador);
        printf("Números positivos: %d\n", positivos);
        printf("Números negativos: %d\n", negativos);
        printf("Maior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
        printf("Soma total: %.0f\n", soma);
        printf("Média: %.2f\n", media);
        
        if (media > 0) {
            printf("A média é POSITIVA\n");
        } else if (media < 0) {
            printf("A média é NEGATIVA\n");
        } else {
            printf("A média é ZERO\n");
        }
    } else {
        printf("Nenhum número foi inserido.\n");
    }
    
    return 0;
}