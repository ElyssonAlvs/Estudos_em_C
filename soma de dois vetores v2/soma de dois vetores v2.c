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

    for (int i = 0, j = n-1; i < n; i++, j--)
        soma[i] = vet1[i] + vet2[j] ;
    // vet1 = 0 1 2 3 4 5 6 7 8 9 - percorrendo normalmente
    // vet2 = 9 8 7 6 5 4 3 2 1 0 - percorrendo de trás para frente
    /* OU

    for (int i = 0; i < n; i++)
        soma[i] = vet1[i] + vet2[n-1-n] ;
    */

    // IMPRIMINDO
    for (int i = 0; i < n; i++) printf("%d ", soma[i]) ;

}
