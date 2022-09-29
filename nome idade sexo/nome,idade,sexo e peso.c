#include <stdio.h>
#include <stdlib.h>

void main(){
    char nome[60];
    int idd;
    float peso;
    printf("Escreva seu nome : \n");
    scanf("%s", &nome);
    printf("Escreva a sua idade : \n");
    scanf("%d", &idd);
    printf("Escreva seu peso : \n");
    scanf("%f", &peso);
    printf("Seu nome eh %s, sua idade eh %d e você peso eh %.1f Kg", nome, idd, peso);
}
