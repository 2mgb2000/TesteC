#include <stdio.h>
#include <string.h>

int main() {
    char texto[101]; // 100 caracteres + \0
    
    printf("=== CONTADOR DE CARACTERES ===\n");
    printf("Insira uma palavra ou frase (max 100 caracteres): ");
    scanf(" %[^\n]", texto);
    
    int total_chars = strlen(texto);
    int letras = 0, vogais = 0, consoantes = 0, espacos = 0, digitos = 0;
    int contadores[256] = {0}; // Para contar cada caractere
    
    // Analisar cada caractere
    for (int i = 0; i < total_chars; i++) {
        char c = texto[i];
        contadores[c]++; // Contar ocorrências
        
        if (c == ' ') {
            espacos++;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letras++;
            // Verificar se é vogal
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vogais++;
            } else {
                consoantes++;
            }
        }
        else if (c >= '0' && c <= '9') {
            digitos++;
        }
    }
    
    // Mostrar análise
    printf("\n=== ANÁLISE DO TEXTO ===\n");
    printf("Texto: \"%s\"\n", texto);
    printf("Total de caracteres: %d\n", total_chars);
    printf("Letras: %d\n", letras);
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Espaços: %d\n", espacos);
    printf("Dígitos: %d\n", digitos);
    
    // Encontrar caractere mais frequente
    char mais_frequente = texto[0];
    int max_freq = contadores[texto[0]];
    
    for (int i = 0; i < total_chars; i++) {
        if (contadores[texto[i]] > max_freq) {
            max_freq = contadores[texto[i]];
            mais_frequente = texto[i];
        }
    }
    
    printf("Caractere mais frequente: '%c' (%d vezes)\n", mais_frequente, max_freq);
    
    // Procurar caractere específico
    char procurar;
    printf("\nQue caractere quer procurar? ");
    scanf(" %c", &procurar);
    printf("O caractere '%c' aparece %d vez(es)\n", procurar, contadores[procurar]);
    
    // Converter para maiúsculas
    printf("\nTexto em maiúsculas: ");
    for (int i = 0; i < total_chars; i++) {
        char c = texto[i];
        if (c >= 'a' && c <= 'z') {
            c = c - 32; // Converter para maiúscula
        }
        printf("%c", c);
    }
    printf("\n");
    
    return 0;
}