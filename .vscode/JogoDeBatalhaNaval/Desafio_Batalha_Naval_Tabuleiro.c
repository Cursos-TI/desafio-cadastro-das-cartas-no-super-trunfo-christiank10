#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa com zeros
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coloca o número 3 na horizontal (linha 2, colunas 3 a 5)
    int linha = 2;
    for (int j = 3; j < 6; j++) {
        tabuleiro[linha][j] = 3;
    }

    // Coloca o número 3 na vertical (coluna 4, linhas 5 a 7)
    int coluna = 7;
    for (int i = 6; i < 9; i++) {
        tabuleiro[i][coluna] = 3;
    }

    // Imprime o tabuleiro
    printf("Tabuleiro Batalha Naval:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}