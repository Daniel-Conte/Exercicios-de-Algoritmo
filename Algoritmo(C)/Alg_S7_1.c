#include <stdio.h>
int main(){
    //variables
    int n, maior = 0;
    //input
    printf("Digite um numero: ");
    scanf("%d",&n);
    //process
    while (n != 0){
        if (n > maior){
            maior = n;
        }
        printf("Digite um numero: ");
        scanf("%d",&n);
    }
    printf("O maior numero e: %d",maior);
}