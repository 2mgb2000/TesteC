#include <stdio.h>

int main() {

    int numero;

    printf("Introduza o numero de 1 a 7: \n");
    scanf("%d",&numero);

    switch (numero) {
        case 1:
            printf("Segunda-feira");
            break;
        case 2:
            printf("Terca-feira");
            break;
        case 3:
            printf("Quarta-feira");
            break;
        case 4:
            printf("Quinta-feira");
            break;
        case 5:
            printf("Sexta-feira");
            break;
        case 6:
            printf("Sabado");
            break;
        case 7:
            printf("Domingo");
            break;
        default:
            printf("Numero invalido.");
    }

}    //
// Created by 2mgb2000 on 02/09/2025.
//