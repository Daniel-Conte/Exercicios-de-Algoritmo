#include <stdio.h>
int main(){
    //variables
    int n, p = 0, i = 0;
    //input
    printf("Digite um numero: ");
    scanf("%d",&n);
    //process
    if (n % 2 == 0){
        p = 1;
    }else{
        i = 1;
    }
    printf("Numeros PARES: %d\n",p);
    printf("Numeros IMPARES: %d",i);
}