#include <stdio.h>
 void main(){
    int n ;
    scanf("%d", &n) ;
    int numeros[n] ;
    int chave ;
    // ENTRADA DE DADOS
    for (int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }
    //RECEBER A CHAVE
    scanf("%d", &chave) ;

    //PERCORRER O VETOR PARA ACHAR A CHAVE
    int indice = -1 ;
    for (int i = 0; i < n; i++){
        if (chave == numeros[i]){
            indice = i ;
            //QUEBRAR A ESTRUTURA DE REPETICAO DO "for" QUANDO A CHAVE APARACER APENAS 1 VEZ
            break ;
        }
    }
    printf("%d", indice) ;
 }
