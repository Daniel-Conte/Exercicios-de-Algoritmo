#include <stdio.h>
int main(){
    //variables
    float altura, pideal;
    //input
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    //process
    pideal = ((altura * 72.7) - 58);
    //output
    printf("Seu peso ideal e: %.2f",pideal);
    return 0;
}