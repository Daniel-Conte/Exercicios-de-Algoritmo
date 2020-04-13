#include <stdio.h>
int main(){
    //variables
    int pares[5], vetor[5], i, cont = 0;
    //input
    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
        //process
        if((vetor[i] % 2 == 0) && (vetor[i] > 0)){
            pares[cont] = vetor[i];
            cont += 1;
        }
    }
    //output
    printf("Os valores pares sao: \n");
    for(i = 0; i < cont; i++){
        printf("%d\n",pares[i]);
    }
}
