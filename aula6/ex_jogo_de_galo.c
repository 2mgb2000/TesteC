 
#include <stdio.h>
int main() {
    char tabuleiro[3][3][1];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j][0]= '_';
        }
        printf("\n");
    }
    printf("Tabuleiro \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j][0]);
        }
        printf("\n");
    }
    int linha,coluna;
    for (int jogadas = 1; jogadas <= 3; jogadas++) {
        printf("Faca a sua jogada n%d \n",jogadas);
        printf("\nEscolha a linha (0-2):");
        scanf("%d",&linha);
        printf("\nEscolha a coluna (0-2):");
        scanf("%d",&coluna);
        if (linha >=0 && linha < 3 && coluna >= 0 && coluna < 3) {
            tabuleiro[linha][coluna][0] = 'X';
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%c ", tabuleiro[i][j][0]);
            }
            printf("\n");
        }
    }
    return 0;
}
 
 