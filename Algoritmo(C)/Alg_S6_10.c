#include <stdio.h>
int main(){
    //variables
    int idade;
    //input
    printf("Digite a idade do nadador: ");
    scanf("%d",&idade);
    //process + output
    if (idade >= 18){
        printf("Adulto");
    }else if (idade >= 14){
        printf("Juvenil-B");
    }else if (idade >= 12){
        printf("Juvenil-A");
    }else if (idade >= 8){
        printf("Infantil-B");
    }else if (idade >= 5){
        printf("Infantil-A");
    }
}