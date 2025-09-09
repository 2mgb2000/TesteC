#include <stdio.h>

int main() {
    char nome[50];
    char apelido[50];
    char nomeCompleto[100];

    printf("=== INFORMAÇÕES PESSOAIS ===\n");

    printf("Primeiro nome: ");
    scanf("%s", nome);  // Só lê uma palavra

    printf("Apelido: ");
    scanf("%s", apelido);

    printf("\nInformações inseridas:\n");
    printf("Nome: %s\n", nome);
    printf("Apelido: %s\n", apelido);

    // Tentar "juntar" as strings manualmente
    int i = 0, j = 0;

    // Copiar nome
    while (nome[i] != '\0') {
        nomeCompleto[j] = nome[i];
        i++;
        j++;
    }

    // Adicionar espaço
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




}



//
// Created by 2mgb2000 on 05/09/2025.
//