#include <stdio.h>
int main(){
    //variables
    int n;
    //input
    printf("Digite um numero: ");
    scanf("%d",&n);
    //process + output
    if (n % 2 == 0){
        if (n > 0){
            printf("O numero %d e PAR e POSITIVO",n);
        }else{
            printf("O numero %d e PAR e NEGATIVO",n);
        }
    }else{
        if (n > 0){
            printf("O numero %d e IMPAR e POSITIVO",n);
        }else{
            printf("O numero %d e IMPAR e NEGATIVO",n);
        }
    }
}