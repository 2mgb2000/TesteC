#include <stdio.h>

int main() {

    float temp[3];
    int maxIndex = 0;
    float maxTemp = temp[0];

    // pedir temperatura de utilizador
    for (int i=0; i < 3; i++) {
        printf("Temperatura do dia: ");
        scanf("%f", &temp[i]);
    }

    // imprimir resultado de forma organizada
    for (int i=0; i < 3; i++) {
        printf("Temperatura do dia %i e %.1f \n", i+1, temp[i]);
    }

    // max temperatura e que dia
    for (int i=1; i < 3; i++) {
        if (temp[i] > maxTemp) {
            maxTemp = temp[i];
            maxIndex=i;
        }
    }
    printf("Temperatura maxima %.1f era no dia %i\n", maxTemp, maxIndex+1);

    // media de 3 dias
    printf("Temperatura media e %.1f\n", (temp[0] + temp[1] + temp[2])/3);
    return 0;
}
