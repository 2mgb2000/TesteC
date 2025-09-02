#include <stdio.h>

int main() {

    float celsius;

    printf("Digite temperatura em Celsius: \n");
    scanf("%f", &celsius);

    float fahrenheit = (celsius*9/5)+32;

    printf("%.2f graus Celsius e igual a %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}//
// Created by 2mgb2000 on 02/09/2025.
//