#include <stdio.h>
#include <stdlib.h>

int exercicio01 (){
    //printf("Ola, mundo! \n");
    int INDICE = 13,SOMA = 0, K = 0;

    while (K < INDICE)
    {
        K++;
        SOMA = SOMA + K;
    }

    printf("O valor da variavel SOMA e: %d", SOMA);

    //return 0;
}


int main(){
    exercicio01();


return 0;
}
