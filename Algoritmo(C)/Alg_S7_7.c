#include <stdio.h>
int main(){
    //variables
    int id, n, quantidade = 0, esfera = 0, limpeza = 0, cabo = 0, quebrado = 0;
    float pesfera = 0, plimpeza = 0, pcabo = 0, pquebrado = 0;
    //input
    printf("Digite o ID do mouse: ");
    scanf("%d",&id);
    while (id != 0){
        printf("[1] Necessita da esfera\n");
        printf("[2] Necessita de limpeza\n");
        printf("[3] Necessita troca do cabo ou conector\n");
        printf("[4] Quebrado ou inutilizado\n");
        scanf("%d",&n);
        //process
        switch (n){
            case 1 :
                esfera = (esfera + 1);
                break;
            case 2 :
                limpeza = (limpeza + 1);
                break;
            case 3 :
                cabo = (cabo + 1);
                break;
            case 4 :
                quebrado = (quebrado + 1);
                break;
            default :
                printf("Numero invalido\n");
        }
        quantidade++;
        printf("Digite o ID do mouse: ");
        scanf("%d",&id);
    }
    pesfera = (((float)esfera * 100) / (float)quantidade);
    plimpeza = (((float)limpeza * 100) / (float)quantidade);
    pcabo = (((float)cabo * 100) / (float)quantidade);
    pquebrado = (((float)quebrado * 100) / (float)quantidade);
    //output
    printf("Situacao \t\t\t\tQuantidade \tPercentual\n");
    printf("1 - Necessita da esfera \t\t%d \t\t%2.f\n",esfera,pesfera);
    printf("2 - Necessita de limpeza \t\t%d \t\t%2.f\n",limpeza,plimpeza);
    printf("3 - Necessita cabo ou conector \t\t%d \t\t%2.f\n",cabo,pcabo);
    printf("4 - Quebrado ou inutilizado \t\t%d \t\t%2.f\n",quebrado,pquebrado);
}