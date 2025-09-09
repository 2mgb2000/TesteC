// ===============================================================================
// EXERCÍCIO 1: LISTA DE COMPRAS (Fácil)
// ===============================================================================
#include <stdio.h>
#include <string.h>

int main() {
    char itens[5][30];
    int num_itens;
    char procurar[30];

    printf("=== LISTA DE COMPRAS ===\n");
    printf("Quantos itens quer adicionar (max 5)? ");
    scanf("%d", &num_itens);

    if (num_itens > 5) {
        num_itens = 5;
        printf("Limitado a 5 itens.\n");
    }

    // Ler itens
    for (int i = 0; i < num_itens; i++) {
        printf("Item %d: ", i + 1);
        scanf("%s", itens[i]);
    }

    // Mostrar lista completa
    printf("\n=== SUA LISTA DE COMPRAS ===\n");
    for (int i = 0; i < num_itens; i++) {
        printf("%d. %s\n", i + 1, itens[i]);
    }

    // Contar total
    printf("\nTotal de itens: %d\n", num_itens);

    // Encontrar item mais longo
    int mais_longo = 0;
    for (int i = 1; i < num_itens; i++) {
        if (strlen(itens[i]) > strlen(itens[mais_longo])) {
            mais_longo = i;
        }
    }
    printf("Item com nome mais longo: %s (%zu letras)\n",
           itens[mais_longo], strlen(itens[mais_longo]));

    // Procurar item específico
    printf("\nQue item quer procurar? ");
    scanf("%s", procurar);

    int encontrado = 0;
    for (int i = 0; i < num_itens; i++) {
        if (strcmp(itens[i], procurar) == 0) {
            printf("Item '%s' encontrado na posição %d da lista!\n", procurar, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Item '%s' não está na sua lista.\n", procurar);
    }

    return 0;
}

// ===============================================================================
// EXERCÍCIO 2: REGISTO DE ESTUDANTES (Fácil)
// ===============================================================================
#include <stdio.h>
#include <string.h>

int main() {
    char estudantes[8][30];
    int num_estudantes;
    char procurar[30];

    printf("=== REGISTO DE ESTUDANTES ===\n");
    printf("Quantos estudantes quer registar (max 8)? ");
    scanf("%d", &num_estudantes);

    if (num_estudantes > 8) {
        num_estudantes = 8;
        printf("Limitado a 8 estudantes.\n");
    }

    // Ler nomes dos estudantes
    for (int i = 0; i < num_estudantes; i++) {
        printf("Nome do estudante %d: ", i + 1);
        scanf("%s", estudantes[i]);
    }

    // Mostrar lista organizada
    printf("\n=== LISTA DE ESTUDANTES ===\n");
    for (int i = 0; i < num_estudantes; i++) {
        printf("%d. %s\n", i + 1, estudantes[i]);
    }

    // Contar por letras A, B, C
    int conta_A = 0, conta_B = 0, conta_C = 0;
    for (int i = 0; i < num_estudantes; i++) {
        char primeira = estudantes[i][0];
        if (primeira == 'A' || primeira == 'a') conta_A++;
        else if (primeira == 'B' || primeira == 'b') conta_B++;
        else if (primeira == 'C' || primeira == 'c') conta_C++;
    }

    printf("\n=== ESTATÍSTICAS POR LETRA ===\n");
    printf("Nomes que começam com A: %d\n", conta_A);
    printf("Nomes que começam com B: %d\n", conta_B);
    printf("Nomes que começam com C: %d\n", conta_C);

    // Encontrar nome mais curto e mais longo
    int mais_curto = 0, mais_longo = 0;
    for (int i = 1; i < num_estudantes; i++) {
        if (strlen(estudantes[i]) < strlen(estudantes[mais_curto])) {
            mais_curto = i;
        }
        if (strlen(estudantes[i]) > strlen(estudantes[mais_longo])) {
            mais_longo = i;
        }
    }

    printf("\nNome mais curto: %s (%zu letras)\n",
           estudantes[mais_curto], strlen(estudantes[mais_curto]));
    printf("Nome mais longo: %s (%zu letras)\n",
           estudantes[mais_longo], strlen(estudantes[mais_longo]));

    // Calcular média de caracteres
    int total_chars = 0;
    for (int i = 0; i < num_estudantes; i++) {
        total_chars += strlen(estudantes[i]);
    }
    printf("Número médio de letras por nome: %.1f\n",
           (float)total_chars / num_estudantes);

    // Procurar estudante
    printf("\nNome do estudante a procurar: ");
    scanf("%s", procurar);

    int encontrado = 0;
    for (int i = 0; i < num_estudantes; i++) {
        if (strcmp(estudantes[i], procurar) == 0) {
            printf("Estudante '%s' encontrado na posição %d!\n", procurar, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Estudante '%s' não encontrado.\n", procurar);
    }

    return 0;
}