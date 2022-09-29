#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int i = 0;

    srand(time(NULL));
    int chave = rand() % 1024 + 1, numero_pensado = rand() % 1024 + 1 ;
    int tentativas = 0;
    do{
        printf("Meu chute ed : %d \n", chave);
        if(chave < numero_pensado) printf("Diga como estou : 1");
        else if(chave > numero_pensado) printf("Diga como estou : 2");
        else printf("Diga como estou : 3");
        tentativas++;
    }while(chave != numero_pensado );
    printf("ACERTEI MIZERAVI!!\n");
    printf("Acertei em %d !!!!", tentativas);

}
