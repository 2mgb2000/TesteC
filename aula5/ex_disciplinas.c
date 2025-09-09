#include <stdio.h>


int main() {
    int numero_disc;
    
    printf("=== LISTA DE DISCIPLINAS ===\n\n");

    // pedir numero de disciplinas
    printf("Quantas disciplinas quer inserir (max 3)? ");
    scanf("%d", &numero_disc);

    // limitar a 3 max
    if (numero_disc > 3) {
        numero_disc = 3;
        printf("\nMaximo 3 disciplinas. Ajustado para 3.\n");
    }

    // pedir disciplinas
    char disciplinas[numero_disc][20];

    // limpar '\n' que sobrou do scanf
    getchar();

    for (int i = 0; i < numero_disc; i++) {
            printf("Disciplina %d: ", i+1);
            scanf(" %19[^\n]", disciplinas[i]);
            //fgets(disciplinas[i], sizeof(disciplinas[i]), stdin);
        }

    // imprimir lista de disciplinas
    printf("\n\nDisciplinas inseridas:\n");
    for (int i = 0; i < numero_disc; i++) {
        printf("Disciplina %i: %s\n", i+1, disciplinas[i]);
    }

    return 0;
}









