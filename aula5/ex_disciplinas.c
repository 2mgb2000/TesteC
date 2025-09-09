#include <stdio.h>


int main() {
    int limite = 3;
    int numero_disc;
    
    printf("=== LISTA DE DISCIPLINAS ===\n\n");

    // pedir numero de disciplinas
    printf("Quantas disciplinas quer inserir (max 3)? ");
    scanf("%d", &numero_disc);

    // limitar a 3 max
    if (numero_disc > limite) {
        numero_disc = limite;
        printf("\nMaximo %d disciplinas. Ajustado para %d.\n", limite, limite);
    }

    // pedir disciplinas
    char disciplinas[numero_disc][20];
    
    for (int i = 0; i < numero_disc; i++) {
            printf("\nDisciplina %d: ", i+1);
            fgets(disciplinas[i], sizeof(disciplinas[i]), stdin);
            // scanf("%49[^\n]", disciplinas[i]);
        }

    // imprimir lista de disciplinas
    printf("\nDisciplinas inseridas:\n");
    for (int i = 0; i < numero_disc; i++) {
        printf("Disciplina %i: %s\n", i+1, disciplinas[i]);
    }

    return 0;
}









