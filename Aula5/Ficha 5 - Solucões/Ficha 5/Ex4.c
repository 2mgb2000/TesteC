#include <stdio.h>

int main() {
    float vendas[31];
    int num_dias;
    int opcao;
    
    printf("=== REGISTO DE VENDAS DIÁRIAS ===\n");
    printf("Quantos dias do mês quer registar (max 31)? ");
    scanf("%d", &num_dias);
    
    if (num_dias > 31) {
        num_dias = 31;
        printf("Limitado a 31 dias.\n");
    }
    
    // Ler vendas com validação
    for (int i = 0; i < num_dias; i++) {
        do {
            printf("Vendas do dia %d: ", i + 1);
            scanf("%f", &vendas[i]);
            if (vendas[i] < 0) {
                printf("Valor inválido! Vendas devem ser ≥ 0.\n");
            }
        } while (vendas[i] < 0);
    }
    
    do {
        printf("\n=== MENU ===\n");
        printf("1. Mostrar vendas de todos os dias\n");
        printf("2. Calcular vendas totais do mês\n");
        printf("3. Encontrar melhor e pior dia\n");
        printf("4. Calcular média diária\n");
        printf("5. Contar dias acima da média\n");
        printf("6. Mostrar dias com vendas superiores a valor específico\n");
        printf("7. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("\n=== VENDAS DIÁRIAS ===\n");
                for (int i = 0; i < num_dias; i++) {
                    printf("Dia %2d: %.2f euros\n", i + 1, vendas[i]);
                }
                break;
                
            case 2: {
                float total = 0;
                for (int i = 0; i < num_dias; i++) {
                    total += vendas[i];
                }
                printf("\nVendas totais do mês: %.2f euros\n", total);
                break;
            }
            
            case 3: {
                int melhor_dia = 0, pior_dia = 0;
                for (int i = 1; i < num_dias; i++) {
                    if (vendas[i] > vendas[melhor_dia]) melhor_dia = i;
                    if (vendas[i] < vendas[pior_dia]) pior_dia = i;
                }
                
                printf("\n=== MELHOR E PIOR DIA ===\n");
                printf("Melhor dia: Dia %d (%.2f euros)\n", melhor_dia + 1, vendas[melhor_dia]);
                printf("Pior dia: Dia %d (%.2f euros)\n", pior_dia + 1, vendas[pior_dia]);
                break;
            }
            
            case 4: {
                float total = 0;
                for (int i = 0; i < num_dias; i++) {
                    total += vendas[i];
                }
                float media = total / num_dias;
                printf("\nMédia diária: %.2f euros\n", media);
                break;
            }
            
            case 5: {
                float total = 0;
                for (int i = 0; i < num_dias; i++) {
                    total += vendas[i];
                }
                float media = total / num_dias;
                
                int acima_media = 0;
                for (int i = 0; i < num_dias; i++) {
                    if (vendas[i] > media) acima_media++;
                }
                
                printf("\nMédia diária: %.2f euros\n", media);
                printf("Dias com vendas acima da média: %d\n", acima_media);
                break;
            }
            
            case 6: {
                float limite;
                printf("Valor limite: ");
                scanf("%f", &limite);
                
                printf("\nDias com vendas superiores a %.2f euros:\n", limite);
                int count = 0;
                for (int i = 0; i < num_dias; i++) {
                    if (vendas[i] > limite) {
                        printf("- Dia %d: %.2f euros\n", i + 1, vendas[i]);
                        count++;
                    }
                }
                
                if (count == 0) {
                    printf("Nenhum dia com vendas superiores a esse valor.\n");
                } else {
                    printf("Total de dias encontrados: %d\n", count);
                }
                break;
            }
            
            case 7:
                printf("Programa terminado!\n");
                break;
                
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 7);
    
    return 0;
}