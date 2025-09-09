#include <stdio.h>
#include <string.h>

int main() {
    char utilizadores[3][20] = {"admin", "user1", "joao"};
    char passwords[3][20] = {"123456", "password", "abc123"};
    
    char username[20], password[20];
    int tentativas = 0;
    int loginSucesso = 0;
    
    printf("=== SISTEMA DE LOGIN ===\n");
    
    while (tentativas < 3 && !loginSucesso) {
        printf("\nTentativa %d de 3:\n", tentativas + 1);
        
        printf("Username: ");
        scanf("%s", username);
        
        printf("Password: ");
        scanf("%s", password);
        
        // Procurar utilizador
        for (int i = 0; i < 3; i++) {
            if (strcmp(username, utilizadores[i]) == 0) {
                if (strcmp(password, passwords[i]) == 0) {
                    printf("Login realizado com sucesso!\n");
                    printf("Bem-vindo, %s!\n", username);
                    loginSucesso = 1;
                    break;
                } else {
                    printf("Password incorreta!\n");
                    break;
                }
            }
        }
        
        if (!loginSucesso) {
            int userExiste = 0;
            for (int i = 0; i < 3; i++) {
                if (strcmp(username, utilizadores[i]) == 0) {
                    userExiste = 1;
                    break;
                }
            }
            
            if (!userExiste) {
                printf("Utilizador '%s' nao existe!\n", username);
            }
            
            tentativas++;
            
            if (tentativas < 3) {
                printf("Tente novamente.\n");
            }
        }
    }
    
    if (!loginSucesso) {
        printf("\nAcesso bloqueado! Muitas tentativas falhadas.\n");
        printf("Utilizadores validos: admin, user1, joao\n");
    } else {
        printf("\n=== AREA RESTRITA ===\n");
        printf("Esta e uma area so para utilizadores autenticados.\n");
        printf("Utilizador ativo: %s\n", username);
    }
    
    return 0;
}