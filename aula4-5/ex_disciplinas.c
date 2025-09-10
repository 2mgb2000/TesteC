#include <stdio.h>
#include <string.h>


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
        //fgets(disciplinas[i], sizeof(disciplinas[i]), stdin);
        // scanf(" %19[^\n]", disciplinas[i]);

        if (fgets(disciplinas[i], sizeof(disciplinas[i]), stdin)) {
        // remove newline if present
            disciplinas[i][strcspn(disciplinas[i], "\n")] = '\0';

            // if newline was not stored, clear leftover input
            if (strchr(disciplinas[i], '\0') == &disciplinas[i][sizeof(disciplinas[i]) - 1]) {
                int c;
                while ((c = getchar()) != '\n' && c != EOF) { }
            }
        }
    }    

    
    // imprimir lista de disciplinas
    printf("\n\nDisciplinas inseridas:\n");
    for (int i = 0; i < numero_disc; i++) {
        printf("%i. %s\n", i+1, disciplinas[i]);
    }

    return 0;
}









