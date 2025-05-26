#include <stdio.h>
 ///// Carta1 /////
int main(){
    char estado[10] = "Ceara";
    char codigo[10] = "C01";
    char cidade[20] = "Fortaleza";
    float populacao = 9.200;
    float area = 3.130;
    float pib = 7.300;
    int turisticos = 15;
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




}