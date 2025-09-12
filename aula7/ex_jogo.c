 
#include <stdbool.h>
#include <stdio.h>

char nome [25];
int pontuacao=0;

void menu() {
    printf("Seja bem vindo ao meu jogo. Escolha uma das opcoes \n1-Ganhar 10 pontos "
           "\n2-Perder 5 pontos \n3-Ver Status \n0-Sair \n");
}

void adicionarPontos() {
    pontuacao +=10;
    printf("A tua nova pontuacao e: %d\n", pontuacao);
}

void perderPontos() {
    if (pontuacao-5 <0) {
        printf("Nao e possivel subtrair mais \n");
    }else {
        pontuacao -=5;
        printf("A tua nova pontuacao e: %d\n", pontuacao);
    }
}

void status() {
    printf("O jogador %s tem uma pontuacao de %d \n\n", nome, pontuacao);
}

int main() {
    printf("Digita o teu nome: ");
    fgets(nome, sizeof(nome), stdin);
    bool saida=true;
    while(saida) {
        menu();
        int opcao;
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                adicionarPontos();
                break;
            case 2:
                perderPontos();
                break;
            case 3:
                status();
                break;
            case 0:
                saida=false;
                break;
            default:
                printf("O numero que inseriu nao funciona \n");
        }
    }

    return 0;
}
 
 