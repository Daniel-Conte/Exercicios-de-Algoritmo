#include <stdio.h>

int main(){
    //Variáveis
    int n1, n2, soma, mult;

    //input
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%D", &n2);
    //process
    soma = (n1 + n2);
    mult = (soma * n1);
    //output
    printf("O resultado e: %d",mult);
    return 0;
}