#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
} CartaPais;

void compararAtributo(CartaPais c1, CartaPais c2, int atributo) {
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Carta 1: %s\n", c1.nome);
    printf("Carta 2: %s\n", c2.nome);

    switch (atributo) {
        case 1: // Nome do país
            printf("\nAtributo escolhido: Nome do País\n");
            printf("Carta 1: %s\n", c1.nome);
            printf("Carta 2: %s\n", c2.nome);
            printf("Este atributo não é comparável. Apenas informativo.\n");
            break;

        case 2: // População
            printf("\nAtributo: População\n");
            printf("%d vs %d\n", c1.populacao, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.populacao > c1.populacao)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // Área
            printf("\nAtributo: Área (km²)\n");
            printf("%.2f vs %.2f\n", c1.area, c2.area);
            if (c1.area > c2.area)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.area > c1.area)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // PIB
            printf("\nAtributo: PIB (bilhões)\n");
            printf("%.2f vs %.2f\n", c1.pib, c2.pib);
            if (c1.pib > c2.pib)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 5: // Pontos turísticos
            printf("\nAtributo: Pontos turísticos\n");
            printf("%d vs %d\n", c1.pontos_turisticos, c2.pontos_turisticos);
            if (c1.pontos_turisticos > c2.pontos_turisticos)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontos_turisticos > c1.pontos_turisticos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 6: // Densidade demográfica (menor vence)
            printf("\nAtributo: Densidade Demográfica (menor vence)\n");
            printf("%.2f vs %.2f (hab/km²)\n", c1.densidade, c2.densidade);
            if (c1.densidade < c2.densidade)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.densidade < c1.densidade)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida.\n");
    }
}


int main() {
    CartaPais carta1 = {"Brasil", 211000000, 8515767.0, 2200.0, 30, 24.78};
    CartaPais carta2 = {"Japão", 125000000, 377975.0, 5100.0, 45, 330.84};

    int opcao;
    do {
        printf("\n=== MENU DE COMPARAÇÃO ===\n");
        printf("1. Nome do país (informativo)\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Pontos turísticos\n");
        printf("6. Densidade demográfica\n");
        printf("7. Sair\n");
        printf("Escolha o atributo para comparar: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6)
            compararAtributo(carta1, carta2, opcao);
        else if (opcao != 7)
            printf("Opção inválida!\n");

    } while (opcao != 7);

    return 0;
}
