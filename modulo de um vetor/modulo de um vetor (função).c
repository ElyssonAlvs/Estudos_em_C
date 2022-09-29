#include <stdio.h>
#include <stdlib.h>
/*
for pra receber
for pra multiplicar
for pra imprimir
*/

int modulo(int *valor){
    //utilização de ponteiro
    return *valor *= (-1);

}

void modulo_vetor(int n, int vetor[]){
    for(int i = 0; i < n; i++){
        //condicional para aplicar a função de conversão
        if(vetor[i] <= 0) modulo(&vetor[i]);
    }
}

void main(){
    //tamanho
    int n;
    scanf("%d", &n);
    int vetor[n];
    //receber o vetor
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    modulo_vetor(n,vetor);
    //imprimir os resultados
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

}
