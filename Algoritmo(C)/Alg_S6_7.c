#include <stdio.h>
int main(){
    //variables
    int n1, n2, n3, n4, q1, q2, q3, q4;
    //input
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    printf("Digite o terceiro numero: ");
    scanf("%d",&n3);
    printf("Digite o quarto numero: ");
    scanf("%d",&n4);
    //process
    q1 = (n1 * n1);
    q2 = (n2 * n2);
    q3 = (n3 * n3);
    q4 = (n4 * n4);
    //output
    if (q3 >= 1000){
        printf("O quadrado de %d e: %d",n3,q3);
    }else{
        printf("O quadrado de %d e: %d\n",n1,q1);
        printf("O quadrado de %d e: %d\n",n2,q2);
        printf("O quadrado de %d e: %d\n",n3,q3);
        printf("O quadrado de %d e: %d\n",n4,q4);
    }
}