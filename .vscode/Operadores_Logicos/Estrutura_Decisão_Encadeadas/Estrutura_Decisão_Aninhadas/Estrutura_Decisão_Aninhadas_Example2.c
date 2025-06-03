#include <stdio.h>

int main(){

    int dependentes;
    int idade;
    float renda;


    printf ("Digite a sua idade: ");
    scanf ("%d", &idade);
    printf ("Digite a sua renda mensal: ");
    scanf ("%f", &renda);
    printf ("Digite o numero de dependentes: ");
    scanf ("%d", &dependentes);

    if (idade >= 18 && idade < 65){
        if (renda < 3000){
          if (dependentes > 2)
          {
            printf ("Você atende a todos os critérios!\n");
        } else {
            printf ("Você não atende ao critério dependentes\n");
        }

    } else {
            printf ("Você não atende ao critério renda.\n");
        }
    } else {
        printf ("Você não atende ao critério idade\n");
    }




}