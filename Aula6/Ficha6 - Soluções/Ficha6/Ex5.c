#include <stdio.h>
#include <string.h>

int main() {
    char produtos[5][30];
    int quantidades[5];
    int opcao;
    
    printf("=== INVENTARIO SIMPLES ===\n");
    
    // Ler produtos e quantidades
    for (int i = 0; i < 5; i++) {
        printf("Produto %d: ", i + 1);
        scanf("%s", produtos[i]);
        
        do {
            printf("Quantidade de %s: ", produtos[i]);
            scanf("%d", &quantidades[i]);
            if (quantidades[i] < 0) {
                printf("Quantidade nao pode ser negativa!\n");
            }
        } while (quantidades[i] < 0);
    }
    
    do {
        printf("\n=== MENU INVENTARIO ===\n");
        printf("1. Mostrar inventario\n");
        printf("2. Procurar produto\n");
        printf("3. Adicionar stock\n");
        printf("4. Produto com mais stock\n");
        printf("5. Produtos em falta\n");
        printf("6. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("\n=== INVENTARIO COMPLETO ===\n");
                printf("%-20s %s\n", "Produto", "Quantidade");
                printf("%-20s %s\n", "-------", "---------");
                for (int i = 0; i < 5; i++) {
                    printf("%-20s %d\n", produtos[i], quantidades[i]);
                }
                break;
                
            case 2: {
                char procurar[30];
                int encontrado = 0;
                
                printf("Nome do produto: ");
                scanf("%s", procurar);
                
                for (int i = 0; i < 5; i++) {
                    if (strcmp(produtos[i], procurar) == 0) {
                        printf("Produto: %s\n", produtos[i]);
                        printf("Quantidade: %d\n", quantidades[i]);
                        encontrado = 1;
                        break;
                    }
                }
                
                if (!encontrado) {
                    printf("Produto '%s' nao encontrado.\n", procurar);
                }
                break;
            }
            
            case 3: {
                char produto[30];
                int adicionar, encontrado = 0;
                
                printf("Nome do produto: ");
                scanf("%s", produto);
                
                for (int i = 0; i < 5; i++) {
                    if (strcmp(produtos[i], produto) == 0) {
                        printf("Quantidade atual: %d\n", quantidades[i]);
                        printf("Quantidade a adicionar: ");
                        scanf("%d", &adicionar);
                        
                        if (adicionar >= 0) {
                            quantidades[i] += adicionar;
                            printf("Stock atualizado! Nova quantidade: %d\n", quantidades[i]);
                        } else {
                            printf("Quantidade invalida!\n");
                        }
                        encontrado = 1;
                        break;
                    }
                }
                
                if (!encontrado) {
                    printf("Produto '%s' nao encontrado.\n", produto);
                }
                break;
            }
            
            case 4: {
                int mais_stock = 0;
                for (int i = 1; i < 5; i++) {
                    if (quantidades[i] > quantidades[mais_stock]) {
                        mais_stock = i;
                    }
                }
                printf("Produto com mais stock: %s (%d unidades)\n", 
                       produtos[mais_stock], quantidades[mais_stock]);
                break;
            }
            
            case 5: {
                int sem_stock = 0;
                printf("\n=== PRODUTOS EM FALTA ===\n");
                for (int i = 0; i < 5; i++) {
                    if (quantidades[i] == 0) {
                        printf("- %s\n", produtos[i]);
                        sem_stock++;
                    }
                }
                
                if (sem_stock == 0) {
                    printf("Todos os produtos tem stock!\n");
                } else {
                    printf("Total de produtos em falta: %d\n", sem_stock);
                }
                break;
            }
            
            case 6:
                printf("Inventario fechado!\n");
                break;
                
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 6);
    
    return 0;
}