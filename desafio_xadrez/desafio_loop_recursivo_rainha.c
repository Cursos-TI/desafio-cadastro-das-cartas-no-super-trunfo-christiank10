#include <stdio.h>

void moverRainha(int casas){
    if (casas > 0){
        
        printf ("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){
    moverRainha(8);

     return 0;

}