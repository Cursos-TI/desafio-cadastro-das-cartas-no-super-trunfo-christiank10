#include <stdio.h>

int main(){

    int nota;

    printf ("Digite a sua nota: ");
    scanf ("%d", &nota);


    if (nota >= 90){
        printf ("Conceito A!\n");
    } else if (nota >= 80){
        printf ("Conceito é B!\n");
    } else if (nota >=70){
        printf ("O conceito é C!\n");
    } else if (nota >= 60){
        printf ("O conceito é D!\n");
    } else if (nota >= 50){
        printf ("Oconceito é E!\n");
    } else {
        printf ("O conceito é F\n");
    }


}