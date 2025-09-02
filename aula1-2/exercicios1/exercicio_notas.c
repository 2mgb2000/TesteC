#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;

    printf("Nota do teste 1: \n");
    scanf("%d", &nota1);
    printf("Nota do teste 2: \n");
    scanf("%d", &nota2);
    printf("Nota do teste 3: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media >= 10) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}
//
// Created by 2mgb2000 on 02/09/2025.
//