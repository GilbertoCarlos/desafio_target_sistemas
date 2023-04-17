#include <stdio.h>
#include <stdlib.h>

int exercicio02 (int a){
    int i, n=100 ,t1 = 0, t2 = 1 , proxTermo;

	for (i = 1; i <= n; ++i) {  // Percorrendo os valores


		if(a==t1){
            printf("O numnero digitado faz parte da sequecia de fibonnaci \n");
            return 0;
		}


		proxTermo = t1 + t2; // 0, 1 , proxTermo = 1
		t1 = t2;
		t2 = proxTermo;

		}
    printf("O numero digitado NAO faz parte da sequencia de fibonacci!! \n");

   return 0;
}


int main(){
    int n = 0;
    printf("Digite um numero: \n");
    scanf("%i", &n);


    exercicio02(n);

return 0;
}
