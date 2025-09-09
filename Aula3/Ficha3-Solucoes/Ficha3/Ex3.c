#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    
    printf("=== VERIFICADOR DE PASSWORD ===\n");
    printf("Digite uma password: ");
    scanf("%s", password);
    
    int tamanho = strlen(password);
    int temNumero = 0;
    
    printf("\nAnalisando a password '%s'...\n\n", password);
    
    // Verificar comprimento
    printf("Comprimento: %d caracteres\n", tamanho);
    if (tamanho >= 6) {
        printf("Tamanho: OK (minimo 6)\n");
    } else {
        printf("Tamanho: FRACO (muito curta)\n");
    }
    
    // Verificar se tem numeros
    for (int i = 0; i < tamanho; i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            temNumero = 1;
            break;
        }
    }
    
    if (temNumero) {
        printf("Numeros: OK (tem pelo menos um)\n");
    } else {
        printf("Numeros: FRACO (nao tem numeros)\n");
    }
    
    // Classificacao final
    printf("\n=== RESULTADO ===\n");
    if (tamanho >= 6 && temNumero) {
        printf("Password: BOA\n");
    } else if (tamanho >= 6 || temNumero) {
        printf("Password: RAZOAVEL\n");
    } else {
        printf("Password: FRACA\n");
    }
    
    return 0;
}