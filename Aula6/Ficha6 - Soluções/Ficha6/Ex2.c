#include <stdio.h>

int main() {
    int temperaturas[3][7];
    char cidades[3][20] = {"Lisboa", "Porto", "Faro"};
    char dias[7][10] = {"Seg", "Ter", "Qua", "Qui", "Sex", "Sab", "Dom"};
    
    // Ler temperaturas
    for (int cidade = 0; cidade < 3; cidade++) {
        printf("=== %s ===\n", cidades[cidade]);
        for (int dia = 0; dia < 7; dia++) {
            printf("%s: ", dias[dia]);
            scanf("%d", &temperaturas[cidade][dia]);
        }
        printf("\n");
    }
    
    // Mostrar tabela
    printf("=== TEMPERATURAS DA SEMANA ===\n");
    printf("%-10s", "Cidade");
    for (int dia = 0; dia < 7; dia++) {
        printf("%5s", dias[dia]);
    }
    printf(" Media\n");
    
    for (int cidade = 0; cidade < 3; cidade++) {
        printf("%-10s", cidades[cidade]);
        
        int soma = 0;
        for (int dia = 0; dia < 7; dia++) {
            printf("%5d", temperaturas[cidade][dia]);
            soma += temperaturas[cidade][dia];
        }
        
        float media = (float)soma / 7;
        printf("%6.1f\n", media);
    }
    
    // Encontrar dia mais quente
    int temp_max = temperaturas[0][0];
    int cidade_max = 0, dia_max = 0;
    
    for (int cidade = 0; cidade < 3; cidade++) {
        for (int dia = 0; dia < 7; dia++) {
            if (temperaturas[cidade][dia] > temp_max) {
                temp_max = temperaturas[cidade][dia];
                cidade_max = cidade;
                dia_max = dia;
            }
        }
    }
    
    printf("\nDia mais quente: %s em %s (%d graus)\n", 
           dias[dia_max], cidades[cidade_max], temp_max);
    
    // Contar dias acima de 25 graus
    int dias_quentes = 0;
    for (int cidade = 0; cidade < 3; cidade++) {
        for (int dia = 0; dia < 7; dia++) {
            if (temperaturas[cidade][dia] > 25) {
                dias_quentes++;
            }
        }
    }
    
    printf("Dias com temperatura acima de 25 graus: %d\n", dias_quentes);
    
    return 0;
}