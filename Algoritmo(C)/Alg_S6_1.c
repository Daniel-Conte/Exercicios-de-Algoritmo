#include <stdio.h>
int main(){
    //variables
    int n;
    //input
    printf("Digite um numero: ");
    scanf("%d",&n);
    //process
    if (n > 100){
        printf("%d",n);
    }else{
        n = 0;
        printf("%d",n);
    }
}