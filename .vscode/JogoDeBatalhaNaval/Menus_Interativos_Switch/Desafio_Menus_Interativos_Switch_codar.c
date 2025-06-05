#include <stdio.h>
#include <string.h>

// Estrutura da carta de país
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} CartaPais;

// Função para exibir os dados de uma carta
void exibirCarta(CartaPais carta) {
    printf("Nome: %s\n", carta.nome);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Demográfica: %.2f hab/km²\n", carta.densidade_demografica);
}

// Função para comparar dois valores inteiros
int compararInt(int a, int b) {
    return (a > b) ? 1 : (a < b) ? -1 : 0;
}

// Função para comparar dois valores float (normal)
int compararFloatMaior(float a, float b) {
    return (a > b) ? 1 : (a < b) ? -1 : 0;
}

// Função para comparar dois valores float (menor vence)
int compararFloatMenor(float a, float b) {
    return (a < b) ? 1 : (a > b) ? -1 : 0;
}

int main() {
    CartaPais carta1 = {"Brasil", 213000000, 8515767.0, 1860.0, 35, 25.0};
    CartaPais carta2 = {"Japão", 125800000, 377975.0, 4937.0, 50, 332.8};

    int opcao;

    while (1) {
        printf("\n===== MENU DE COMPARAÇÃO =====\n");
        printf("1. Nome dos Países\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Pontos Turísticos\n");
        printf("6. Densidade Demográfica\n");
        printf("7. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 7) {
            printf("Encerrando o programa.\n");
            break;
        }

        printf("\nCarta 1:\n");
        exibirCarta(carta1);
        printf("\nCarta 2:\n");
        exibirCarta(carta2);

        int resultado;

        switch (opcao) {
            case 1:
                printf("\nComparação apenas exibe os nomes.\n");
                break;
            case 2:
                resultado = compararInt(carta1.populacao, carta2.populacao);
                break;
            case 3:
                resultado = compararFloatMaior(carta1.area, carta2.area);
                break;
            case 4:
                resultado = compararFloatMaior(carta1.pib, carta2.pib);
                break;
            case 5:
                resultado = compararInt(carta1.pontos_turisticos, carta2.pontos_turisticos);
                break;
            case 6:
                resultado = compararFloatMenor(carta1.densidade_demografica, carta2.densidade_demografica);
                break;
            default:
                printf("Opção inválida!\n");
                continue;
        }

        if (opcao >= 2 && opcao <= 6) {
            if (resultado == 1)
                printf("\n>> Carta 1 vence!\n");
            else if (resultado == -1)
                printf("\n>> Carta 2 vence!\n");
            else
                printf("\n>> Empate!\n");
        }
    }

    return 0;
}
