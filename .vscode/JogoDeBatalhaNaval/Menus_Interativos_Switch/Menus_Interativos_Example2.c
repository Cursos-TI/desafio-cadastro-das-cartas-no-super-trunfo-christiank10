#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int opcao, regras;
   int numeroSecreto, palpite;

   printf ("Menu Principal\n");
   printf ("1. Iniciar o jogo\n");
   printf ("2. Ver regras\n");
   printf ("3. Sair\n");
   printf ("Escolha uma opcao: ");
   scanf ("%d", &opcao);


  switch (opcao)
  {
  case 1:
     srand (time(0));
     numeroSecreto = rand() % 10; 
     printf ("Digite um numero de 0 a 9:  ");
     scanf ("%d", &palpite);
     if (numeroSecreto == palpite)
     {
        printf ("Você acertou!\n");
        printf("numero secreto %d\n", numeroSecreto);
     }else {
        printf("Você errou!\n");
        printf("numero secreto %d\n", numeroSecreto);
     }
    break;
    case 2:
    printf ("A explicação das regras!\n");
    printf ("Digite a opção relacionada as regras do jogo!\n");
    scanf ("%d", &regras);
    switch (regras)
    {
    case 1:
        printf ("Regras 1");
        break;
        case 2:
        printf ("Regras 2");
        break;
        case 3:
        printf ("Regras 3");
        break;
    }
    
    }

}