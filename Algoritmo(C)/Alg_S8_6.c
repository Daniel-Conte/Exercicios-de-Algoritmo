#include <stdio.h>
int main(){
    //variable
    float vetor[5];
    int i, cod;
    //input
    printf("0 - sair\n");
    printf("1 - ordem direta\n");
    printf("2 - ordem inversa\n");
    printf("Digite o codigo: ");
    scanf("%d",&cod);
    while((cod < 0) || (cod > 2)){
        printf("Codigo invalido\n");
        printf("Digite o codigo: ");
        scanf("%d",&cod);
    }
    //input + process
    while(cod != 0){
        for(i = 0; i <= 4; i++){
            printf("Digite um valor para o vetor %d/5: ",(i + 1));
            scanf("%f",&vetor[i]);
        }
        //output
        switch(cod){
            case (1):{
                for(i = 0; i <= 4; i++){
                    printf("Vetor[%d] = %.2f\n",(i + 1),vetor[i]);
                }
                break;
            }
            case (2):{
                for(i = 4; i >= 0; i--){
                    printf("Vetor[%d] = %.2f\n",(i + 1),vetor[i]);
                }
                break;
            }
        }
        //input
        printf("0 - sair\n");
        printf("1 - ordem direta\n");
        printf("2 - ordem inversa\n");
        printf("Digite o codigo: ");
        scanf("%d",&cod);
        while((cod < 0) || (cod > 2)){
            printf("Codigo invalido\n");
            printf("Digite o codigo: ");
            scanf("%d",&cod);
        }
    }
}