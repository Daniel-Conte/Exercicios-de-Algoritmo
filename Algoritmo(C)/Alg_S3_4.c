#include <stdio.h>
int main(){
    //Variables
    int horas, porh, salario;
    //input
    printf("Voce ganha quanto por hora? ");
    scanf("%d",&porh);
    printf("Voce trabalha quantas horas? ");
    scanf("%d",&horas);
    //process
    salario = (horas * porh);
    //output
    printf("O seu salario e de: R$%d",salario);
    return 0;
}