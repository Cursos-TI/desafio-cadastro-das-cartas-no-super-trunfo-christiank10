#include <stdio.h>
            /// Array de Strings ///

int main(){


     char *nomes[] = {"Alice", "Bob", "Carol"};

     for (int i = 0; i < 3; i++)
     {
        printf ("%s \n", nomes[i]);
     }
    
    return 0;
}