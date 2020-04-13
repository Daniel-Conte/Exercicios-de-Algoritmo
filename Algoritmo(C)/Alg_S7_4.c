#include <stdio.h>
int main(){
    //variables
    int i, n, maior = 0, menor = 1000, soma = 0;
    float media = 0;
    //input + process
    for (i = 1; i <= 10; i++){
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d",&n);
        if (n > 0){
            if (n > maior){
                maior = n;
            }
            if (n < menor){
                menor = n;
            }    
        soma = (soma + n);
        }else{
            i--;
        }
    }
    media = (soma / 10);
    //output
    printf("O maior numero e: %d\n",maior);
    printf("O menor numero e: %d\n",menor);
    printf("A media e: %2.f",media);
}