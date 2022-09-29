#include <stdio.h>

void main(){
    //ENTRADA DE DADOS DO PRIMEIRO "CONJUNTO" VALORES
    int na ;
    scanf("%d", &na);
    int A[na] ;
    for(int i = 0; i < na; i++) scanf("%d", &A[i]) ;
    //ENTRADA DE DADOS DO SEGUNDO "CONJUNTO" DE VALORES
    int nb ;
    scanf("%d", &nb);
    int B[nb] ;
    for(int i = 0; i < nb; i++) scanf("%d", &B[i]) ;
    //LÓGICA DOS PARES ORDENADOS
    for(int i = 0; i < na; i++){
        for(int j = 0; j < nb; j++){
            (A[i], B[j]) ;
            printf("(%d, %d)", A[i], B[j]);
        }
    }
}

