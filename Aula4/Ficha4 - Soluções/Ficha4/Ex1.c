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