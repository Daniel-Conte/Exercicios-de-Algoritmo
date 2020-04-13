#include <stdio.h>
int main(){
    //Variables
    int metros, cm;
    //input
    printf("Digite um valor em metros: ");
    scanf("%d",&metros);
    //process
    cm = (metros * 100);
    //output
    printf("%d metro(s) em centimetros e: %d",metros, cm);
    return 0;
}