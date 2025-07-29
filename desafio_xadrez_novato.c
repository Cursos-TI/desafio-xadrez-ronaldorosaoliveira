#include <stdio.h>

int main() {
    // Movimentação da TORRE - 5 casas para a direita, usando o comando FOR
    int movimentotorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentotorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do BISPO - 5 casas na diagonal para cima e à direita, usando o comando WHILE
    int movimentobispo = 5, contadorbispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorbispo < movimentobispo) {
        printf("Cima\n");
        printf("Direira\n");
        contadorbispo++;
    }

    // Movimentação da RAINHA - 8 casas para a esquerda usando o comando DO-WHILE
    int movimentorainha = 8, contadorrainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorrainha++;
    } while (contadorrainha < movimentorainha);

    return 0;
}
