#include <stdio.h>
int main(){
    //variables
    int vetor[10], i, cont = 0;
    //input
    for(i = 0; i <= 9; i++){
        printf("Digite um valor para o vetor %d/10: ",(i + 1));
        scanf("%d",&vetor[i]);
    }
    //process + output
    for(i = 0; i <= 9; i++){
        if(vetor[i] >= 50){
            printf("O numero %d esta na posicao %d\n",vetor[i],(i + 1));
            cont = 1;
        }
    }
    if(cont < 1){
        printf("Nenhum numero maior que 50 foi digitado");
    }
}