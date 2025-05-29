#include <stdio.h>

#define TAM 10 
#define TAM_NAVIO 3   
#define AGUA 0  
#define NAVIO 3  

void inicializaTabuleiro(int tab[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tab[i][j] = AGUA;
}

void posicionaHorizontal(int tab[TAM][TAM], int linha, int coluna) {
    for (int k = 0; k < TAM_NAVIO; k++)
        tab[linha][coluna + k] = NAVIO;
}

void posicionaVertical(int tab[TAM][TAM], int linha, int coluna) {
    for (int k = 0; k < TAM_NAVIO; k++)
        tab[linha + k][coluna] = NAVIO;
}

void imprimeTabuleiro(int tab[TAM][TAM]) {
    printf("\n     ");
    for (int col = 0; col < TAM; col++) printf("%2d ", col);
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d | ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int tabuleiro[TAM][TAM];
    inicializaTabuleiro(tabuleiro);

    int navioH[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navioV[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    (void)navioH;  // evita warnings de variável não usada
    (void)navioV;

    posicionaHorizontal(tabuleiro, 2, 1);  // coloca navio H
    posicionaVertical(tabuleiro,   5, 7);  // coloca navio V

    imprimeTabuleiro(tabuleiro);

    return 0;
}
