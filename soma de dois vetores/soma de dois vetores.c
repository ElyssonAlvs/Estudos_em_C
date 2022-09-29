#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int vet1[n], vet2[n];

    // ENTRADA DE DADOS

    for (int i = 0; i < n; i++) scanf("%d", &vet1[i]) ;

    for (int i = 0; i < n; i++) scanf("%d", &vet2[i]) ;
    // SOMA DOS VETORES
    int soma[n] ;
    for (int i = 0; i < n; i++) soma[i] = vet1[i] + vet2[i] ;

    // IMPRIMINDO
    for (int i = 0; i < n; i++) printf("%d ", soma[i]) ;

}
