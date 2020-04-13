#include <stdio.h>
int main(){
    //variables
    int horas, salario = 0, exc = 0;
    //input
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d",&horas);
    //process
    if (horas > 50){
        exc = ((horas - 50) * 20);
        salario = (500 + exc);
    }else{
        salario = (horas * 10);
    }
    //output
    printf("O salario total e de R$%d e o excesso foi de R$%d",salario,exc);
}