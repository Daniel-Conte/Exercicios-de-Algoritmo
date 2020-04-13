#include <stdio.h>
#include <string.h>
int main(){
    //variables
    char nome[100], senha[100];
    //input
    printf("Digite seu nome de usuario: ");
    gets(nome); //gets é para char e string
    printf("Digite sua senha: ");
    gets(senha);
    //process
    while (!strcmp(nome,senha)){
        printf("Erro! Digite novamente.\n");
        printf("Digite seu nome de usuario: ");
        gets(nome);
        printf("Digite sua senha: ");
        gets(senha);
    }
}