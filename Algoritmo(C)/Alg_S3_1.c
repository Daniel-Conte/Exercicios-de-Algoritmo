#include <stdio.h>
int main(){
    //Variáveis
    int emin, emax;
    float emedio;
    //input
    printf("Digite o valor do estoque minimo: ");
    scanf("%d",&emin);
    printf("Digite o valor do estoque maximo: ");
    scanf("%d",&emax);
    //process
    emedio = ((emin + emax) / 2);
    //output
    printf("O valor do estoque medio e: %.2f",emedio);
    return 0;
}