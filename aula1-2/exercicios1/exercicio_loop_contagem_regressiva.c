#include <stdio.h>

int main() {

    int numero;

    printf("Introduza um numero para contagem regressiva ate 0: \n");
    scanf("%d",&numero);

    while (numero >= 0) {
        printf("Numero: %d\n",numero);
        numero--;
    }
    return 0;

}
// Created by 2mgb2000 on 02/09/2025.
//