
/*float nota[]
    int dia []
    double []
    bool
    char nomes[]
    tipo_nome [tamanho do array]*/
/*#include <stdio.h>
#include <stdlib.h>

void main() {

 int i, NUM[15];

 //lendo os valores e colocando no array
    for (i=0; i<15; i++) {
        printf("Informe um numero: \n");
        scanf("%d", &NUM[i]);
    }
 //imprimindo os valores presentes no array
    for (i=0; i<15; i++) {
        printf("Numero: %d \n", NUM[i]);
    }
}
*/
#include <stdio.h>
#include <stdlib.h>

void main (){
    int i, lista[5] ;

    //lendo os valores
    for (i = 0; i < 5; i++){

        printf("Informe um numero : \n") ;
        scanf("%d", &lista[i]) ;

    }
    //inicializando o maior valor
    int maior = lista[0] ;
    //enontrando o maior valor
    for (i = 1; i < 5; i++){
        if (maior < lista[i]) maior = lista[i] ;
    }
    printf("Maior = %d \n", maior) ;
}
