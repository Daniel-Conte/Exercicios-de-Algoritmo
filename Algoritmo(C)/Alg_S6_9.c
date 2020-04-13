#include <stdio.h>
int main(){
    //variables
    float indice;
    //input
    printf("Digite o indice de poluicao: ");
    scanf("%f",&indice);
    //process + output
    if (indice >= 0.5){
        printf("As atividades de todos os grupos estao suspensas");
    }else if (indice >= 0.4){
        printf("As atividades dos grupos 1 e 2 estao suspensas");
    }else if (indice >= 0.3){
        printf("As atividades do grupo 1 estao suspensas");
    }else {
        printf("Nenhum grupo esta suspenso");
    }
}