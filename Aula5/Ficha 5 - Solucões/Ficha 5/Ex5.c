#include <stdio.h>

int main() {
    int temperaturas[30];
    int num_dias;
    
    printf("=== ANALISADOR DE TEMPERATURAS MENSAIS ===\n");
    printf("Quantos dias quer registar (max 30)? ");
    scanf("%d", &num_dias);
    
    if (num_dias > 30) {
        num_dias = 30;
        printf("Limitado a 30 dias.\n");
    }
    
    // Ler temperaturas com validação
    for (int i = 0; i < num_dias; i++) {
        do {
            printf("Temperatura do dia %d: ", i + 1);
            scanf("%d", &temperaturas[i]);
            if (temperaturas[i] < -50 || temperaturas[i] > 60) {
                printf("Temperatura inválida! Deve estar entre -50 e 60 graus.\n");
            }
        } while (temperaturas[i] < -50 || temperaturas[i] > 60);
    }
    
    // Calcular estatísticas
    int soma = 0;
    int max_temp = temperaturas[0], min_temp = temperaturas[0];
    int dia_max = 1, dia_min = 1;
    int negativos = 0, amenas = 0, quentes = 0;
    
    for (int i = 0; i < num_dias; i++) {
        soma += temperaturas[i];
        
        if (temperaturas[i] > max_temp) {
            max_temp = temperaturas[i];
            dia_max = i + 1;
        }
        if (temperaturas[i] < min_temp) {
            min_temp = temperaturas[i];
            dia_min = i + 1;
        }
        
        if (temperaturas[i] < 0) negativos++;
        else if (temperaturas[i] >= 15 && temperaturas[i] <= 25) amenas++;
        else if (temperaturas[i] > 30) quentes++;
    }
    
    float media = (float)soma / num_dias;
    
    // Mostrar estatísticas
    printf("\n=== ESTATÍSTICAS COMPLETAS ===\n");
    printf("Temperatura média: %.1f°C\n", media);
    printf("Temperatura máxima: %d°C (dia %d)\n", max_temp, dia_max);
    printf("Temperatura mínima: %d°C (dia %d)\n", min_temp, dia_min);
    printf("Dias com temperatura negativa: %d\n", negativos);
    printf("Dias com temperatura amena (15-25°C): %d\n", amenas);
    printf("Dias quentes (> 30°C): %d\n", quentes);
    
    // Procurar temperatura específica
    int procurar, encontrados = 0;
    printf("\nQue temperatura quer procurar? ");
    scanf("%d", &procurar);
    
    printf("Dias com temperatura %d°C:\n", procurar);
    for (int i = 0; i < num_dias; i++) {
        if (temperaturas[i] == procurar) {
            printf("- Dia %d\n", i + 1);
            encontrados++;
        }
    }
    
    if (encontrados == 0) {
        printf("Nenhum dia com essa temperatura.\n");
    } else {
        printf("Total encontrados: %d dias\n", encontrados);
    }
    
    // Gráfico simples
    printf("\n=== GRÁFICO DE TEMPERATURAS ===\n");
    printf("(cada * = 5°C, cada - = -5°C)\n\n");
    
    for (int i = 0; i < num_dias; i++) {
        printf("Dia %2d (%3d°C): ", i + 1, temperaturas[i]);
        
        if (temperaturas[i] >= 0) {
            int asteriscos = temperaturas[i] / 5;
            for (int j = 0; j < asteriscos; j++) {
                printf("*");
            }
        } else {
            int tracos = (-temperaturas[i]) / 5;
            for (int j = 0; j < tracos; j++) {
                printf("-");
            }
        }
        printf("\n");
    }
    
    return 0;
}