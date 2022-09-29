#include <stdio.h>

void main (){

    int n;
    scanf("%d", &n) ;
    float media[n], ap1[n], ap2[n] ;

    //NOTAS AP1
    for(int i = 0; i < n; i++){
    scanf("%f", &ap1[i]) ;
    }
    //NOTAS AP2
    for(int i = 0; i < n; i++){
    scanf("%f", &ap2[i]) ;
    }
    //CALCULO DA MEDIA
    for(int i = 0; i < n; i++){
    media[i] = (ap1[i] + ap2[i])/2.0 ;
    }
    //IMPRIMIR OR RESULTADOS
    for(int i = 0; i < n; i++){
        printf("%.2f ", media[i]) ;
    }
}
