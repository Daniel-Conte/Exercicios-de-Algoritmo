#include <stdio.h>
#include <ctype.h>
int main(){
    //variables
    float altura, pideal;
    char sexo;
    //input
    printf("Digite sua altura: ");
    scanf("%f",&altura);
    gets(stdin); //corrigir bug
    printf("Qual o seu sexo?[M/F] ");
    scanf("%c",&sexo);
    //process
    if (toupper(sexo) == 'M'){
        pideal = ((altura * 72.7) -58);
        printf("Seu peso ideal e: %.2f",pideal);
    }else if(toupper(sexo) == 'F'){
        pideal = ((altura * 62.1) -44.7);
        printf("Seu peso ideal e: %.2f",pideal);
    }else{
        printf("Sexo invalido.");
    }
}