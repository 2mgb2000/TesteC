#include <stdio.h>

int main() {
    int opcao, numero;

    do {
        printf("\n=== MENU DE OPERACOEES ===\n");
        printf("1. Verificar se e par ou impar\n");
        printf("2. Calcular quadrado\n");
        printf("3. Mostrar tabuada\n");
        printf("4. Contar ate um numero\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                if (numero % 2 == 0) {
                    printf("%d e PAR\n", numero);
                } else {
                    printf("%d e IMPAR\n", numero);
                }
                break;

            case 2:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                printf("%d² = %d\n", numero, numero * numero);
                break;

            case 3:
                printf("Tabuada de que numero? ");
                scanf("%d", &numero);
                printf("\nTabuada do %d:\n", numero);
                for (int i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", numero, i, numero * i);
                }
                break;

            case 4:
                printf("Contar ate que numero? ");
                scanf("%d", &numero);
                printf("Contagem: ");
                for (int i = 1; i <= numero; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 0:
                printf("Programa terminado!\n");
                break;

            default:
                printf("Opção invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}//
// Created by 2mgb2000 on 02/09/2025.
//