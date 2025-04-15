#include <stdio.h>

int main(){
    printf("cartas super trunfo!\n");
    //// carta 2 ////
    char estado[10] ="Bahia";
    char codigo = 'B02';
    char cidade[20] = "Salvador";
    int populacao = 14.850;
    float area = 693;
    float pib = 115;
    int turisticos = 13;

    printf("Estado: %s\n", estado);
    printf("Codigo: %c\n", codigo);
    printf("cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Pib: %f\n", pib);
    printf("Turisticos: %i\n", turisticos);

    

    return 0;
}