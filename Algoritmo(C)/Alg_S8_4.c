#include <stdio.h>
int main(){
    //variables
    int vetor[20], i, soma = 0;
    //input
    for(i = 0; i <= 19; i++){
        printf("Digite o valor do vetor %d/20: ",(i + 1));
        scanf("%d",&vetor[i]);
        //process
        soma += vetor[i];
    }
    //output
    printf("A soma e: %d",soma);
}