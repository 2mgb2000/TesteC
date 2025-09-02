#include <stdio.h>

int main() {
    int primeiro, ultimo, contador = 0;

    printf("Inicio do intervalo: ");
    scanf("%d", &primeiro);
    printf("Fin do intervalo: ");
    scanf("%d", &ultimo);

   //trocar os valores
   if (primeiro > ultimo) {
        int temp = primeiro;
        primeiro = ultimo;
        ultimo = temp;
    }

    printf("\nNumeros pares no intervalo %d e %d:\n", primeiro, ultimo);

    for (int i = primeiro; i <= ultimo; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            contador++;
        }
    }

    printf("\n\nTotal de numeros pares: %d\n", contador);

    return 0;
}//
// Created by 2mgb2000 on 02/09/2025.
//