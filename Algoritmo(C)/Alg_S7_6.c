#include <stdio.h>
int main(){
    //variables
    int i, n, r;
    //input
    printf("Digite o numero da tabuada de 1 a 10: ");
    scanf("%d",&n);
    //process
    while (n < 1 || n > 10){
        printf("Digite novamente o numero da tabuada de 1 a 10: ");
        scanf("%d",&n);
    }
    for (i = 1; i <= 10; i++){
        r = (n * i);
        printf("%d x %d = %d\n",n,i,r);
    }
}