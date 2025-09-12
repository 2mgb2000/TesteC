#include <stdio.h>
#include <string.h>

// a. Funcao que retorna o dobro de um numero
int dobrar(int numero) {
    return numero * 2;
}

// b. Funcao que retorna o maior de tres numeros
int maior_de_tres(int a, int b, int c) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}

// c. Funcao que calcula soma de 1 ate n
int soma_ate_n(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

// d. Funcao que verifica se numero e primo
int e_primo(int numero) {
    if (numero <= 1) return 0;
    if (numero <= 3) return 1;
    if (numero % 2 == 0 || numero % 3 == 0) return 0;
    
    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

// e. Funcao que inverte uma string
void inverter_string(char str[]) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;
    }
}

// f. Funcao que conta vogais
int contar_vogais(char str[]) {
    int count = 0;
    int tamanho = strlen(str);
    
    for (int i = 0; i < tamanho; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

// g. Funcao que calcula fatorial
long long fatorial(int n) {
    if (n == 0 || n == 1) return 1;
    
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// h. Funcao que encontra segundo maior em array
int segundo_maior(int arr[], int tamanho) {
    if (tamanho < 2) return -1; // Erro
    
    int maior = arr[0];
    int segundo = arr[0];
    
    // Encontrar o maior
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    
    // Encontrar o segundo maior
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] > segundo && arr[i] < maior) {
            segundo = arr[i];
        }
    }
    
    // Verificar se existe segundo maior diferente
    if (segundo == maior) {
        for (int i = 0; i < tamanho; i++) {
            if (arr[i] < maior && arr[i] > segundo) {
                segundo = arr[i];
            }
        }
        if (segundo == maior) return -1; // Todos iguais
    }
    
    return segundo;
}

// i. Funcao que verifica palindromo
int e_palindromo(char str[]) {
    int tamanho = strlen(str);
    
    for (int i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

// j. Funcao que ordena array usando bubble sort
void ordenar_array(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int opcao;
    
    do {
        printf("\n=== MENU DE FUNCOES ===\n");
        printf("a. Dobrar numero\n");
        printf("b. Maior de tres numeros\n");
        printf("c. Soma de 1 ate n\n");
        printf("d. Verificar se e primo\n");
        printf("e. Inverter string\n");
        printf("f. Contar vogais\n");
        printf("g. Calcular fatorial\n");
        printf("h. Segundo maior em array\n");
        printf("i. Verificar palindromo\n");
        printf("j. Ordenar array\n");
        printf("k. Sair\n");
        printf("Escolha opcao (a-k): ");
        
        char escolha;
        scanf(" %c", &escolha);
        
        switch(escolha) {
            case 'a': {
                int numero;
                printf("Digite um numero: ");
                scanf("%d", &numero);
                printf("Dobro: %d\n", dobrar(numero));
                break;
            }
            
            case 'b': {
                int a, b, c;
                printf("Digite tres numeros: ");
                scanf("%d %d %d", &a, &b, &c);
                printf("Maior: %d\n", maior_de_tres(a, b, c));
                break;
            }
            
            case 'c': {
                int n;
                printf("Digite n: ");
                scanf("%d", &n);
                printf("Soma de 1 ate %d: %d\n", n, soma_ate_n(n));
                break;
            }
            
            case 'd': {
                int numero;
                printf("Digite um numero: ");
                scanf("%d", &numero);
                if (e_primo(numero)) {
                    printf("%d e primo\n", numero);
                } else {
                    printf("%d nao e primo\n", numero);
                }
                break;
            }
            
            case 'e': {
                char str[100];
                printf("Digite uma string: ");
                scanf("%s", str);
                inverter_string(str);
                printf("String invertida: %s\n", str);
                break;
            }
            
            case 'f': {
                char str[100];
                printf("Digite uma string: ");
                scanf("%s", str);
                printf("Numero de vogais: %d\n", contar_vogais(str));
                break;
            }
            
            case 'g': {
                int n;
                printf("Digite um numero: ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Fatorial nao definido para numeros negativos\n");
                } else {
                    printf("Fatorial de %d: %lld\n", n, fatorial(n));
                }
                break;
            }
            
            case 'h': {
                int tamanho;
                printf("Tamanho do array: ");
                scanf("%d", &tamanho);
                
                if (tamanho < 2) {
                    printf("Array deve ter pelo menos 2 elementos!\n");
                    break;
                }
                
                int arr[100];
                printf("Digite %d numeros: ", tamanho);
                for (int i = 0; i < tamanho; i++) {
                    scanf("%d", &arr[i]);
                }
                
                int segundo = segundo_maior(arr, tamanho);
                if (segundo == -1) {
                    printf("Nao existe segundo maior (todos iguais?)\n");
                } else {
                    printf("Segundo maior: %d\n", segundo);
                }
                break;
            }
            
            case 'i': {
                char str[100];
                printf("Digite uma palavra: ");
                scanf("%s", str);
                if (e_palindromo(str)) {
                    printf("'%s' e um palindromo\n", str);
                } else {
                    printf("'%s' nao e um palindromo\n", str);
                }
                break;
            }
            
            case 'j': {
                int tamanho;
                printf("Tamanho do array: ");
                scanf("%d", &tamanho);
                
                int arr[100];
                printf("Digite %d numeros: ", tamanho);
                for (int i = 0; i < tamanho; i++) {
                    scanf("%d", &arr[i]);
                }
                
                ordenar_array(arr, tamanho);
                
                printf("Array ordenado: ");
                for (int i = 0; i < tamanho; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            
            case 'k':
                printf("Programa terminado!\n");
                opcao = 0;
                break;
                
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    
    return 0;
}