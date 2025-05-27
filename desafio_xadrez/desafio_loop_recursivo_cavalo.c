#include <stdio.h>

void moverCavalo(int casas){
    
    if (casas > 0){
        
        printf ("Cima\n");
        moverCavalo(casas - 1);
        printf ("Esquerda\n");
        
    }
        
}

int main(){
    moverCavalo(2);

     return 0;

}