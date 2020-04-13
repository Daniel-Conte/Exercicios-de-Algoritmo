#include <stdio.h>
int main(){
    //variables
    int n, a, b;
    //input
    printf("Digite um numero: ");
    scanf("%d",&n);
    //process
    if (n > 0){
        a = n;
        printf("O numero %d e positivo",a);
    }else{
        b = n;
        printf("O numero %d e negativo",b);
    }
}