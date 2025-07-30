#include <stdio.h>

// Movimento da Torre usando função recursiva para imprimir "Direita" 5 vezes
void movimentotorre(int numero) {
    if (numero > 0) {
        printf("Direita\n");
        movimentotorre(numero - 1);
    }
}

// Movimento da Rainha usando função recursiva para imprimir "Esquerda" 8 vezes
void movimentorainha(int numero) {
    if (numero > 0) {
        printf("Esquerda\n");
        movimentorainha(numero - 1);
    }
}

// Movimento do Bispo usando função recursiva para imprimir "Diagonal (Cima, Direita)" 5 vezes
void movimentobispo(int numero) {
    if (numero > 0) {
        printf("Cima\n");
        printf("Direita\n");
        movimentobispo(numero - 1);
    }
}

// Movimento do Cavalo usando usando loop aninhado com múltiplas variáveis e imprimir o movimento em L (Cima, Cima, Direita) 1 vez
void movimentocavalo(int numero) {
    int i, j;
    // Loop para imprimir o movimento do cavalo
    for (i = 0; i < numero; i++) {
        for (j = 0; j < 2; j++) {
            
            if (j == 0) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
            } 
        }
    }
}


int main() {
    int quantidade_torre = 5;
    int quantidade_rainha = 8;
    int quantidade_bispo = 5;
    int quantidade_cavalo = 1;

    printf("Movimento da Torre:\n");
    movimentotorre(quantidade_torre);  // Movimento da Torre

    printf("\nMovimento da Rainha:\n");
    movimentorainha(quantidade_rainha);  // Movimento da Rainha

    printf("\nMovimento do Bispo:\n");
    movimentobispo(quantidade_bispo);  // Movimento do Bispo

    printf("\nMovimento do Cavalo:\n");
    movimentocavalo(quantidade_cavalo);  // Movimento do Cavalo

    return 0;
}
