#include <stdio.h>
int main(){
    //Variáveis
    int n1, n2, soma;
    //input
    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf("Digite o segundo numero: ");
    scanf("%d",&n2);
    //process
    soma = (n1 + n2);
    //output
    printf("A soma e: %d",soma);
    return 0;
}