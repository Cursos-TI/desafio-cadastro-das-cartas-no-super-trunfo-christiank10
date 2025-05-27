#include <stdio.h>

void moverBispo(int casas){
    if (casas > 0){
        
        printf ("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

int main(){
    moverBispo(5);

     return 0;

}