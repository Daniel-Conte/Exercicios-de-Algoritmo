#include <stdio.h>
int main(){
    //variables
    float peso, exc = 0, multa = 0;
    //input
    printf("Digite o peso total dos peixes: ");
    scanf("%f",&peso);
    if (peso > 50){
        exc = (peso - 50);
        multa = (exc * 4);
    }
    printf("Com o excesso de %.2fKg, o valor da multa e: R$%.2f",exc, multa);
}