#include <stdio.h>
#include <string.h>

int main() {
    char nomes[10][30];
    char telefones[10][15];
    int num_contactos = 0;
    int opcao;
    char nome_procurar[30];
    char temp_nome[30], temp_telefone[15];
    
    printf("=== AGENDA TELEFÓNICA ===\n");
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Adicionar contacto\n");
        printf("2. Listar todos os contactos\n");
        printf("3. Procurar contacto por nome\n");
        printf("4. Ordenar contactos por nome (A-Z)\n");
        printf("5. Mostrar estatísticas\n");
        printf("6. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                if (num_contactos < 10) {
                    printf("Nome da pessoa: ");
                    scanf(" %[^\n]", nome_procurar);
                    
                    // Verificar se o nome já existe
                    int ja_existe = 0;
                    for (int i = 0; i < num_contactos; i++) {
                        if (strcmp(nomes[i], nome_procurar) == 0) {
                            printf("Contacto com esse nome já existe!\n");
                            ja_existe = 1;
                            break;
                        }
                    }
                    
                    if (!ja_existe && strlen(nome_procurar) > 0) {
                        strcpy(nomes[num_contactos], nome_procurar);
                        printf("Número de telefone: ");
                        scanf("%s", telefones[num_contactos]);
                        num_contactos++;
                        printf("Contacto adicionado com sucesso!\n");
                    } else if (strlen(nome_procurar) == 0) {
                        printf("Nome não pode estar vazio!\n");
                    }
                } else {
                    printf("Agenda cheia! Máximo 10 contactos.\n");
                }
                break;
                
            case 2:
                if (num_contactos == 0) {
                    printf("Agenda vazia.\n");
                } else {
                    printf("\n=== LISTA DE CONTACTOS ===\n");
                    printf("%-20s %s\n", "Nome", "Telefone");
                    printf("%-20s %s\n", "----", "--------");
                    for (int i = 0; i < num_contactos; i++) {
                        printf("%-20s %s\n", nomes[i], telefones[i]);
                    }
                    printf("\nTotal: %d contactos\n", num_contactos);
                }
                break;
                
            case 3:
                printf("Nome a procurar: ");
                scanf(" %[^\n]", nome_procurar);
                
                int encontrado = 0;
                for (int i = 0; i < num_contactos; i++) {
                    if (strcmp(nomes[i], nome_procurar) == 0) {
                        printf("\nContacto encontrado:\n");
                        printf("%s: %s\n", nomes[i], telefones[i]);
                        encontrado = 1;
                        break;
                    }
                }
                
                if (!encontrado) {
                    printf("Contacto '%s' não encontrado.\n", nome_procurar);
                }
                break;
                
            case 4:
                // Ordenar por nome usando bubble sort
                for (int i = 0; i < num_contactos - 1; i++) {
                    for (int j = 0; j < num_contactos - i - 1; j++) {
                        if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                            // Trocar nomes
                            strcpy(temp_nome, nomes[j]);
                            strcpy(nomes[j], nomes[j + 1]);
                            strcpy(nomes[j + 1], temp_nome);
                            
                            // Trocar telefones correspondentes
                            strcpy(temp_telefone, telefones[j]);
                            strcpy(telefones[j], telefones[j + 1]);
                            strcpy(telefones[j + 1], temp_telefone);
                        }
                    }
                }
                printf("Contactos ordenados por nome (A-Z)!\n");
                break;
                
            case 5:
                printf("\n=== ESTATÍSTICAS DA AGENDA ===\n");
                printf("Total de contactos: %d\n", num_contactos);
                
                if (num_contactos > 0) {
                    // Nome mais longo e mais curto
                    int mais_longo = 0, mais_curto = 0;
                    for (int i = 1; i < num_contactos; i++) {
                        if (strlen(nomes[i]) > strlen(nomes[mais_longo])) {
                            mais_longo = i;
                        }
                        if (strlen(nomes[i]) < strlen(nomes[mais_curto])) {
                            mais_curto = i;
                        }
                    }
                    
                    printf("Nome mais longo: %s (%zu caracteres)\n", 
                           nomes[mais_longo], strlen(nomes[mais_longo]));
                    printf("Nome mais curto: %s (%zu caracteres)\n", 
                           nomes[mais_curto], strlen(nomes[mais_curto]));
                    
                    // Contar nomes que começam com 'A'
                    int comeca_com_A = 0;
                    for (int i = 0; i < num_contactos; i++) {
                        if (nomes[i][0] == 'A' || nomes[i][0] == 'a') {
                            comeca_com_A++;
                        }
                    }
                    printf("Contactos que começam com 'A': %d\n", comeca_com_A);
                    
                    // Média de caracteres por nome
                    int total_chars = 0;
                    for (int i = 0; i < num_contactos; i++) {
                        total_chars += strlen(nomes[i]);
                    }
                    printf("Média de caracteres por nome: %.1f\n", 
                           (float)total_chars / num_contactos);
                }
                break;
                
            case 6:
                printf("Agenda fechada. Até à próxima!\n");
                break;
                
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 6);
    
    return 0;
}