#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int i = 0;
    //MUDAR O VARIAVEL DE ALEATORIEDADE
    srand(time(NULL));
    while(i < 10){
        //DEFINIR O INTERVALO QUE VAI PEGAR OS NUMEROS
        int chave = rand() % 60 + 1;
        //IMPRIMIR OS NUMEROS
        printf("%d\n", chave);
        //INCREMENTAR UM NUMERO
        i++;
    }
}
