#include <stdio.h>

int main() {
    float notas[25];
    int num_alunos;
    int opcao;
    
    printf("=== GESTOR DE NOTAS DE EXAME ===\n");
    printf("Quantos alunos fizeram o exame (max 25)? ");
    scanf("%d", &num_alunos);
    
    if (num_alunos > 25) {
        num_alunos = 25;
        printf("Limitado a 25 alunos.\n");
    }
    
    // Ler notas com validação
    for (int i = 0; i < num_alunos; i++) {
        do {
            printf("Nota do aluno %d: ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0.0 || notas[i] > 20.0) {
                printf("Nota inválida! Deve estar entre 0.0 e 20.0.\n");
            }
        } while (notas[i] < 0.0 || notas[i] > 20.0);
    }
    
    do {
        printf("\n=== MENU ===\n");
        printf("1. Mostrar todas as notas\n");
        printf("2. Calcular estatísticas\n");
        printf("3. Contar aprovados e reprovados\n");
        printf("4. Mostrar distribuição por escalas\n");
        printf("5. Procurar uma nota específica\n");
        printf("6. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("\n=== TODAS AS NOTAS ===\n");
                for (int i = 0; i < num_alunos; i++) {
                    printf("Aluno %2d: %.1f\n", i + 1, notas[i]);
                }
                break;
                
            case 2: {
                float soma = 0, maior = notas[0], menor = notas[0];
                
                for (int i = 0; i < num_alunos; i++) {
                    soma += notas[i];
                    if (notas[i] > maior) maior = notas[i];
                    if (notas[i] < menor) menor = notas[i];
                }
                
                printf("\n=== ESTATÍSTICAS ===\n");
                printf("Média da turma: %.1f\n", soma / num_alunos);
                printf("Nota mais alta: %.1f\n", maior);
                printf("Nota mais baixa: %.1f\n", menor);
                break;
            }
            
            case 3: {
                int aprovados = 0, reprovados = 0;
                
                for (int i = 0; i < num_alunos; i++) {
                    if (notas[i] >= 9.5) aprovados++;
                    else reprovados++;
                }
                
                printf("\n=== APROVAÇÕES ===\n");
                printf("Aprovados (≥ 9.5): %d alunos\n", aprovados);
                printf("Reprovados (< 9.5): %d alunos\n", reprovados);
                printf("Taxa de aprovação: %.1f%%\n", (float)aprovados * 100 / num_alunos);
                break;
            }
            
            case 4: {
                int escalas[5] = {0}; // 0-4.9, 5-9.4, 9.5-13.9, 14-16.9, 17-20
                
                for (int i = 0; i < num_alunos; i++) {
                    if (notas[i] < 5.0) escalas[0]++;
                    else if (notas[i] < 9.5) escalas[1]++;
                    else if (notas[i] < 14.0) escalas[2]++;
                    else if (notas[i] < 17.0) escalas[3]++;
                    else escalas[4]++;
                }
                
                printf("\n=== DISTRIBUIÇÃO POR ESCALAS ===\n");
                printf("0.0 - 4.9:  %d alunos\n", escalas[0]);
                printf("5.0 - 9.4:  %d alunos\n", escalas[1]);
                printf("9.5 - 13.9: %d alunos\n", escalas[2]);
                printf("14.0 - 16.9: %d alunos\n", escalas[3]);
                printf("17.0 - 20.0: %d alunos\n", escalas[4]);
                break;
            }
            
            case 5: {
                float procurar;
                int encontrados = 0;
                
                printf("Que nota quer procurar? ");
                scanf("%f", &procurar);
                
                printf("Alunos com nota %.1f:\n", procurar);
                for (int i = 0; i < num_alunos; i++) {
                    if (notas[i] == procurar) {
                        printf("- Aluno %d\n", i + 1);
                        encontrados++;
                    }
                }
                
                if (encontrados == 0) {
                    printf("Nenhum aluno com essa nota.\n");
                } else {
                    printf("Total encontrados: %d alunos\n", encontrados);
                }
                break;
            }
            
            case 6:
                printf("Programa terminado!\n");
                break;
                
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);
    
    return 0;
}
