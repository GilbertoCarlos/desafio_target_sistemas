#include <stdio.h>
#include <stdlib.h>

void exercicio05 (char frase[]){

printf("A frase e: %s \n",frase);

int i, aux, fim, tam = strlen(frase);

    fim = tam - 1; // índice do último caracter
    for(i = 0; i < tam/2; i++){
        aux = frase[i];
        frase[i] = frase[fim];
        frase[fim] = aux;
        fim--;
    }

    printf("A frase invertida fica: %s \n",frase);

}


int main(){
    char frase[55];

    printf("Digite qualquer coisa: \n");
    scanf("%55[^\n]",frase);

    exercicio05(frase);

return 0;
}
