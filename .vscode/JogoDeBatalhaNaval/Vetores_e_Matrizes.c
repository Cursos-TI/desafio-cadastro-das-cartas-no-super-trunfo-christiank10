#include <stdio.h>
         // Declaração, Inicialização e Acesso //
int main(){

    int numeros[5];  // Declaração de um valor de inteiros
    // Inicializando os elementos do vetor
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;
    // Acessando elementos do vetor
    printf ("O primeiro elemento é %d\n", numeros[0]);
    printf ("O segundo elemento é %d\n", numeros[1]);

    return 0;
}