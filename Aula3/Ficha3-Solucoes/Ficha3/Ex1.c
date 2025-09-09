#include <stdio.h>

int main() {
    char nome[50];
    char apelido[50];
    char nomeCompleto[100];
    
    printf("=== INFORMACOES PESSOAIS ===\n");
    
    printf("Primeiro nome: ");
    scanf("%s", nome);
    
    printf("Apelido: ");
    scanf("%s", apelido);
    
    printf("\nInformacoes inseridas:\n");
    printf("Nome: %s\n", nome);
    printf("Apelido: %s\n", apelido);
    
    // Construir nome completo manualmente
    int i = 0, j = 0;
    
    // Copiar nome
    while (nome[i] != '\0') {
        nomeCompleto[j] = nome[i];
        i++;
        j++;
    }
    
    // Adicionar espaco
    nomeCompleto[j] = ' ';
    j++;
    
    // Copiar apelido
    i = 0;
    while (apelido[i] != '\0') {
        nomeCompleto[j] = apelido[i];
        i++;
        j++;
    }
    
    // Terminar string
    nomeCompleto[j] = '\0';
    
    printf("Nome completo: %s\n", nomeCompleto);
    
    return 0;
}