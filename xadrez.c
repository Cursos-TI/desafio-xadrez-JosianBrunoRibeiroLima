#include <stdio.h>

int main() {
    // Simulacao de movimentos de pecas de xadrez

    // ----------------------
    // Movimento da Torre - 5 casas para a direita usando for
    // ----------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ----------------------
    // Movimento do Bispo - 5 casas na diagonal superior direita usando while
    // ----------------------
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // ----------------------
    // Movimento da Rainha - 8 casas para a esquerda usando do-while
    // ----------------------
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
