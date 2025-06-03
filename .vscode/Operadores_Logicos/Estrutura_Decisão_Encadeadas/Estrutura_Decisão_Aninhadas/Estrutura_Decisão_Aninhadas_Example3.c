#include <stdio.h>

int main(){

    int numero;

    printf("Digite m numero: ");
    scanf ("%d", &numero);

    if (numero > 0){
      if (numero % 2 == 0)
      { 
        printf ("Numero par!\n");
    } else {
        printf ("Numero é impar");
    }
    
    }


}