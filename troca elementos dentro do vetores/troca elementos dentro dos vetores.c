#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int vet1[n], vet2[n];

    // ENTRADA DE DADOS

    for (int i = 0; i < n; i++) scanf("%d", &vet1[i]) ;

    for (int i = 0; i < n; i++) scanf("%d", &vet2[i]) ;
    /*MODIFICACAO ENTRE OS VETORES, PARA ISSO PRECISO DE UMA VARIÁVEL AUXILIAR,
    PARA GUARDAR OS VALORES PARA NAO SEREM PERDIDOS*/
    for (int i = 0;i < n; i += 2){

        int aux = vet1[i] ;
        vet1[i] = vet2[i] ;
        vet2[i] = aux ;


    }
    //IMPRIMIR OS RESULTDOS
    for(int i = 0; i < n; i++) printf("%d ", vet1[i]) ;

    for(int i = 0; i < n; i++) printf("%d ", vet2[i]) ;
}
