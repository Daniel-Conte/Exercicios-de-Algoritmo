#include <stdio.h>
int main(){
    //variables
    int vetor1[10], vetor2[10], soma[10], i;
    //input
    for(i = 0; i < 10; i++){
        printf("Escreva um valor para o primeiro vetor[%d]: ",i);
        scanf("%d",&vetor1[i]);
        printf("Escreva um valor para o segundo vetor[%d]: ",i);
        scanf("%d",&vetor2[i]);
        //process
        soma[i] = (vetor1[i] + vetor2[i]);
    }
        //output
    for(i = 0; i < 10; i++){
        printf("A soma dos vetores[%d] e : %d\n",i ,soma[i]);
    }
}