/*#include <stdio.h>

void main(){

    int n ;
    scanf("%d", &n);
    //ENTRADA DE DADOS
    int vet[n] ;
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]) ;
    }

    //LÓGICA DA POTENCIAÇÃO
    int numero = 0 ;
    for(int i = 0; i < n; i++){
        int expoente = n - (i + 1) ;

        //CÓDIGO QUE IMPLEMENTA A POTÊNCIA
        int p = 1 ;
        for(int j = 0; j <= expoente; j++ )
            p *= 10 ; //p = p * 10

        numero += vet[i]*p ;
    }
    printf("%d", numero);
 }*/
//################################################
// OUTRA FORMA
#include <stdio.h>
#include <math.h>

void main(){

    int n ;
    scanf("%d", &n);
    //ENTRADA DE DADOS
    int vet[n] ;
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]) ;
    }
    //FUNÇÃO QUE IMPLEMENTA A POTENCIAÇÃO
    int numero = 0;
    for(int i = 0; i < n; i++){
        int expoente = n - (i + 1) ;
        numero += vet[1]* pow(10,expoente);
    }
    printf("%d", numero) ;
}

