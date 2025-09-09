#include <stdio.h>
#include <string.h>

int main() {
    char tarefas[15][50];
    char prioridades[15][10];
    int num_tarefas = 0;
    int opcao;
    char temp_tarefa[50], temp_prioridade[10];
    char palavra[30];
    
    printf("=== ORGANIZADOR DE TAREFAS ===\n");
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Adicionar nova tarefa\n");
        printf("2. Listar todas as tarefas\n");
        printf("3. Listar tarefas de prioridade Alta\n");
        printf("4. Ordenar tarefas alfabeticamente\n");
        printf("5. Contar tarefas por prioridade\n");
        printf("6. Procurar tarefa por palavra-chave\n");
        printf("7. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                if (num_tarefas < 15) {
                    printf("Descrição da tarefa: ");
                    scanf(" %[^\n]", tarefas[num_tarefas]);
                    
                    do {
                        printf("Prioridade (Alta/Media/Baixa): ");
                        scanf("%s", prioridades[num_tarefas]);
                    } while (strcmp(prioridades[num_tarefas], "Alta") != 0 && 
                             strcmp(prioridades[num_tarefas], "Media") != 0 && 
                             strcmp(prioridades[num_tarefas], "Baixa") != 0);
                    
                    num_tarefas++;
                    printf("Tarefa adicionada com sucesso!\n");
                } else {
                    printf("Lista de tarefas cheia! Máximo 15 tarefas.\n");
                }
                break;
                
            case 2:
                if (num_tarefas == 0) {
                    printf("Nenhuma tarefa registada.\n");
                } else {
                    printf("\n=== TODAS AS TAREFAS ===\n");
                    for (int i = 0; i < num_tarefas; i++) {
                        printf("%d. %s: %s\n", i + 1, prioridades[i], tarefas[i]);
                    }
                }
                break;
                
            case 3:
                printf("\n=== TAREFAS DE PRIORIDADE ALTA ===\n");
                int count_alta = 0;
                for (int i = 0; i < num_tarefas; i++) {
                    if (strcmp(prioridades[i], "Alta") == 0) {
                        printf("%d. %s: %s\n", count_alta + 1, prioridades[i], tarefas[i]);
                        count_alta++;
                    }
                }
                if (count_alta == 0) {
                    printf("Nenhuma tarefa com prioridade Alta.\n");
                }
                break;
                
            case 4:
                // Ordenar alfabeticamente usando bubble sort
                for (int i = 0; i < num_tarefas - 1; i++) {
                    for (int j = 0; j < num_tarefas - i - 1; j++) {
                        if (strcmp(tarefas[j], tarefas[j + 1]) > 0) {
                            // Trocar tarefas
                            strcpy(temp_tarefa, tarefas[j]);
                            strcpy(tarefas[j], tarefas[j + 1]);
                            strcpy(tarefas[j + 1], temp_tarefa);
                            
                            // Trocar prioridades correspondentes
                            strcpy(temp_prioridade, prioridades[j]);
                            strcpy(prioridades[j], prioridades[j + 1]);
                            strcpy(prioridades[j + 1], temp_prioridade);
                        }
                    }
                }
                printf("Tarefas ordenadas alfabeticamente!\n");
                break;
                
            case 5:
                printf("\n=== CONTAGEM POR PRIORIDADE ===\n");
                int alta = 0, media = 0, baixa = 0;
                for (int i = 0; i < num_tarefas; i++) {
                    if (strcmp(prioridades[i], "Alta") == 0) alta++;
                    else if (strcmp(prioridades[i], "Media") == 0) media++;
                    else if (strcmp(prioridades[i], "Baixa") == 0) baixa++;
                }
                printf("Alta: %d tarefas\n", alta);
                printf("Média: %d tarefas\n", media);
                printf("Baixa: %d tarefas\n", baixa);
                printf("Total: %d tarefas\n", num_tarefas);
                break;
                
            case 6:
                printf("Palavra-chave a procurar: ");
                scanf("%s", palavra);
                
                printf("\n=== TAREFAS QUE CONTÊM '%s' ===\n", palavra);
                int encontradas = 0;
                for (int i = 0; i < num_tarefas; i++) {
                    if (strstr(tarefas[i], palavra) != NULL) {
                        printf("- %s: %s\n", prioridades[i], tarefas[i]);
                        encontradas++;
                    }
                }
                
                if (encontradas == 0) {
                    printf("Nenhuma tarefa encontrada com essa palavra-chave.\n");
                } else {
                    printf("Total encontradas: %d tarefas\n", encontradas);
                }
                break;
                
            case 7:
                printf("Saindo do organizador...\n");
                break;
                
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 7);
    
    return 0;
}