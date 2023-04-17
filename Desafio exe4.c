#include <stdio.h>
#include <stdlib.h>


int exercicio04 (void){
    float SP=67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53;

    float SOMA = SP + RJ + MG + ES + Outros;

    float pSP = (SP/SOMA)*100;
    float pRJ = (RJ/SOMA)*100;
    float pMG = (MG/SOMA)*100;
    float pES = (ES/SOMA)*100;
    float pOutros = (Outros/SOMA)*100;

    printf("O estado de SP representa %.2f%% do total mensal da distribuidora \n", pSP);
    printf("O estado de RJ representa %.2f%% do total mensal da distribuidora \n", pRJ);
    printf("O estado de MG representa %.2f%% do total mensal da distribuidora \n", pMG);
    printf("O estado de ES representa %.2f%% do total mensal da distribuidora \n", pES);
    printf("Outros estados representam %.2f%% do total mensal da distribuidora \n", pOutros);


}


int main(){
    exercicio04();

return 0;
}
