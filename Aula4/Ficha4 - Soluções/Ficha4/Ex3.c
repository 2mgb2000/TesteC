#include <stdio.h>
#include <string.h>

int main() {
    char filmes[10][50];
    int num_filmes = 0;
    int opcao;
    char titulo[50], palavra[30];
    
    printf("=== CATÁLOGO DE FILMES ===\n");
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Adicionar filme\n");
        printf("2. Listar todos os filmes\n");
        printf("3. Procurar filme por nome completo\n");
        printf("4. Procurar filmes que contenham uma palavra\n");
        printf("5. Mostrar estatísticas\n");
        printf("6. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                if (num_filmes < 10) {
                    printf("Título do filme: ");
                    scanf(" %[^\n]", filmes[num_filmes]);
                    num_filmes++;
                    printf("Filme adicionado com sucesso!\n");
                } else {
                    printf("Catálogo cheio! Máximo 10 filmes.\n");
                }
                break;
                
            case 2:
                if (num_filmes == 0) {
                    printf("Catálogo vazio.\n");
                } else {
                    printf("\n=== CATÁLOGO DE FILMES ===\n");
                    for (int i = 0; i < num_filmes; i++) {
                        printf("%d. %s\n", i + 1, filmes[i]);
                    }
                }
                break;
                
            case 3:
                printf("Título a procurar: ");
                scanf(" %[^\n]", titulo);
                
                int encontrado = 0;
                for (int i = 0; i < num_filmes; i++) {
                    if (strcmp(filmes[i], titulo) == 0) {
                        printf("Filme encontrado: %s\n", filmes[i]);
                        encontrado = 1;
                        break;
                    }
                }
                
                if (!encontrado) {
                    printf("Filme '%s' não encontrado.\n", titulo);
                }
                break;
                
            case 4:
                printf("Palavra a procurar: ");
                scanf("%s", palavra);
                
                printf("Filmes que contêm '%s':\n", palavra);
                int count = 0;
                for (int i = 0; i < num_filmes; i++) {
                    if (strstr(filmes[i], palavra) != NULL) {
                        printf("- %s\n", filmes[i]);
                        count++;
                    }
                }
                
                if (count == 0) {
                    printf("Nenhum filme encontrado com essa palavra.\n");
                } else {
                    printf("Total encontrados: %d filmes\n", count);
                }
                break;
                
            case 5:
                printf("\n=== ESTATÍSTICAS ===\n");
                printf("Total de filmes: %d\n", num_filmes);
                
                if (num_filmes > 0) {
                    // Filme mais longo e mais curto
                    int mais_longo = 0, mais_curto = 0;
                    for (int i = 1; i < num_filmes; i++) {
                        if (strlen(filmes[i]) > strlen(filmes[mais_longo])) {
                            mais_longo = i;
                        }
                        if (strlen(filmes[i]) < strlen(filmes[mais_curto])) {
                            mais_curto = i;
                        }
                    }
                    
                    printf("Título mais longo: %s (%zu caracteres)\n", 
                           filmes[mais_longo], strlen(filmes[mais_longo]));
                    printf("Título mais curto: %s (%zu caracteres)\n", 
                           filmes[mais_curto], strlen(filmes[mais_curto]));
                    
                    // Média de caracteres
                    int total_chars = 0;
                    for (int i = 0; i < num_filmes; i++) {
                        total_chars += strlen(filmes[i]);
                    }
                    printf("Média de caracteres: %.1f\n", (float)total_chars / num_filmes);
                    
                    // Contar filmes com "de"
                    int com_de = 0;
                    for (int i = 0; i < num_filmes; i++) {
                        if (strstr(filmes[i], "de") != NULL || strstr(filmes[i], "De") != NULL) {
                            com_de++;
                        }
                    }
                    printf("Filmes que contêm 'de': %d\n", com_de);
                }
                break;
                
            case 6:
                printf("Saindo do catálogo...\n");
                break;
                
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);
    
    return 0;
}