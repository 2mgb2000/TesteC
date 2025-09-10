 
#include <stdio.h>
int main() {
    int matriz[2][2];
//printf("%zu",sizeof(matriz));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Qual o numero que quer meter na posicao [%d][%d]",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("A matriz escolhida \n \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
 
 

