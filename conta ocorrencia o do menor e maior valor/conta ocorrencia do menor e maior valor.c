#include <stdio.h>
#include <limits.h> // inteiro - maiores e menores valores
#include <float.h> // float - maiores e menores valores
int main (){
    // ENTRADA DE DADOS
    int n;
    scanf("%d", &n);
    int numeros[n] ;
     for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }
    //###############################
    // ENCONTRAR O MAIOR E MENOR NUMERO DENTRO DO VETOR
    int maior = INT_MIN;
    int menor = INT_MAX;

    for(int i = 0; i < n; i++){
        if(numeros[i] > maior)
            maior = numeros[i];

        if(numeros[i] < menor)
            menor = numeros[i];
    }
    //#################################
    // CONTAR A OCORRENCIA DO MENOR E MAIOR
    int qtdMaior = 0, qtdMenor = 0 ;
    for(int i = 0; i < n; i++){
        if (numeros[i] == maior) qtdMaior++;

        if(numeros[i] == menor) qtdMenor++;
    }
    //###################################
    printf("(%d, %d) (%d, %d)", qtdMenor, menor, qtdMaior, maior) ;
}
