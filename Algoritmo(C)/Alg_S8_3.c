#include <stdio.h>
int main(){
    //variables
    int vetor[10], i;
    //input
    for(i = 0; i <= 9; i++){
        printf("Digite o %do numero: ",i);
        scanf("%d",&vetor[i]);
    }
    for(i = 9; i >= 0; i--){
        printf("%d\n",vetor[i]);
    }
}