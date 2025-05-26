#include <stdio.h>
///// Carta 2 /////
int main(){
    char estado[10] = "Bahia";
    char codigo[10] = "B02";
    char cidade[20] = "Salvador";
    float populacao = 7.480;
    float area = 9.850;
    float pib = 8.500;
    int turisticos = 13;
    float DensidadePopulacional = populacao / area;
    float PibPerCapita = pib / populacao;

    float resultado = populacao + area + pib + turisticos;


    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("cidade: %s\n", cidade);
    printf("Populacao: %f\n", populacao);
    printf("area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Turisticos: %i\n", turisticos);
    printf("DensidadePopulacional: %f\n", DensidadePopulacional);
    printf("PibPerCapita: %f\n", PibPerCapita);

    printf("resultado: %f\n", resultado);


    return 0;
}