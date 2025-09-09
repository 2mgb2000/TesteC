#include <stdio.h>
#include <string.h>

int main() {
    char texto[200];
    char palavra[50];
    int opcao;
    
    printf("=== CONVERSOR DE TEXTO ===\n");
    printf("Digite um texto: ");
    scanf(" %[^\n]", texto);
    
    do {
        printf("\n=== MENU ===\n");
        printf("1. Mostrar texto\n");
        printf("2. Converter para maiusculas\n");
        printf("3. Converter para minusculas\n");
        printf("4. Contar palavras\n");
        printf("5. Procurar palavra\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("\nTexto atual: '%s'\n", texto);
                break;
                
            case 2:
                for (int i = 0; texto[i] != '\0'; i++) {
                    if (texto[i] >= 'a' && texto[i] <= 'z') {
                        texto[i] = texto[i] - 32;
                    }
                }
                printf("Convertido para maiusculas\n");
                break;
                
            case 3:
                for (int i = 0; texto[i] != '\0'; i++) {
                    if (texto[i] >= 'A' && texto[i] <= 'Z') {
                        texto[i] = texto[i] + 32;
                    }
                }
                printf("Convertido para minusculas\n");
                break;
                
            case 4: {
                int palavras = 0;
                int emPalavra = 0;
                
                for (int i = 0; texto[i] != '\0'; i++) {
                    if (texto[i] != ' ' && !emPalavra) {
                        palavras++;
                        emPalavra = 1;
                    } else if (texto[i] == ' ') {
                        emPalavra = 0;
                    }
                }
                
                printf("Numero de palavras: %d\n", palavras);
                break;
            }
            
            case 5:
                printf("Palavra a procurar: ");
                scanf("%s", palavra);
                
                if (strstr(texto, palavra) != NULL) {
                    printf("Palavra '%s' encontrada!\n", palavra);
                } else {
                    printf("Palavra '%s' nao encontrada\n", palavra);
                }
                break;
                
            case 0:
                printf("Programa terminado!\n");
                break;
                
            default:
                printf("Opcao invalida!\n");
        }
        
    } while (opcao != 0);
    
    return 0;
}