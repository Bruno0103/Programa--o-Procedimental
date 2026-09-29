/*
  ⠀⠀⠀⠀⠀⢀⣴⣶⣶⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣼⡟⠁⠈⠙⠻⢿⣿⣄⠀⢀⠀⠀⠀    ⠀⠀⢀⣴⣾⡿⣿⣦⠀⠀⠀⠀
⠀⠀⠀⠀⠀⢠⣿⡇⣠⣴⣶⠶⠿⠿⠟⠿⠛⠿⠿⠿⢿⣶⣶⣿⡋    ⠘⣿⣇⠀⠀⠀
⠀⠀⠀⠀⠀⢸⣿⣿⠟⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠿⢿⣶⣄    ⣿⡿⠀⠀⠀
⠀⠀⠀⠀⢠⣼⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣷  ⣴⡿⠀⠀⠀I Love Cats
⠀⠀⠀⠀⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣇⠀⠀⠀
⠀⠀⠀⣸⣿⠁⠀⠀⠀⣴⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣶⠀⠀⠀⠀⢻⣿⠀⠀⠀
⢠⣶⡷⣿⣿⢿⢿⡦⠀⠀⠀⠀⢠⡄⠀⠛⠃⠀⣠⡀⠀⠀  ⢀⣀⣀⣼⣿⣤⣀⡀
⠀⣠⣤⣽⣿⣶⣶⣶⣦⠀⠀⠀⠘⢿⣴⠿⠿⣶⠿⠁    ⠈⢛⣉⣿⣿⣋⣙⡃
⠀⠛⠉⠉⢿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⠛⢻⣿⣿⠛⠛⠛⠛
⠀⠀⠀⠀⠘⢿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀     ⠀ ⠀⢀⣀⣴⡿⠟⠀⠀Bruno Soares Rodrigues
⠀⠀⠀⠀⠀⠀⠙⢿⣷⣦⣤⣄⣀⣀⣀⣀⡀⣀⣠⣤⣤⣴⣿⠿⠋⠀12511ECP004
⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠛⠛⠛⠿⠿⠟⠻⠟⠻⠛⠛⠉⠉⠀⠀⠀⠀

Função VerificarSeEPrimo(n)
    Se n <= 1 Então Retorne Falso
    Se n == 2 Então Retorne Verdadeiro
    Se n % 2 == 0 Então Retorne Falso  // Elimina pares

    divisor = 3
    Enquanto (divisor * divisor) <= n Faça
        Se n % divisor == 0 Então
            Retorne Falso  // Achou um divisor, não é primo
        FimSe
        divisor = divisor + 2  // Pula para o próximo ímpar
    FimEnquanto

    Retorne Verdadeiro  // Passou em todos os testes
FimFunção
*/

#include <stdio.h>

// Função que verifica se um número é primo
int VerificarSeEPrimo(int n) {
    if (n <= 1) return 0;       // Falso
    if (n == 2) return 1;       // Verdadeiro
    if (n % 2 == 0) return 0;   // Elimina números pares

    int divisor = 3;
    while (divisor * divisor <= n) {
        if (n % divisor == 0) {
            return 0; // Achou um divisor, não é primo
        }
        divisor += 2; // Pula para o próximo ímpar
    }

    return 1; // Passou em todos os testes, é primo
}

int main() {
    float numero;

    // Lê a entrada como ponto flutuante para validar se foi digitado um número inteiro
    scanf("%f", &numero);

    // Validações:
    // 1. Não é inteiro (ex: 10.5)
    // 2. Menor que 2 ou maior que 10000
    if ( (int)numero != numero || numero < 2 || numero > 10000) {
        printf("Valor incorreto!\n");
        return 0;
    }

    int n = (int)numero;

    // Imprime todos os números primos de 2 até n
    for (int i = 2; i <= n; i++) {
        if (VerificarSeEPrimo(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

 