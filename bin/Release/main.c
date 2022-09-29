#include <stdio.h>
#include <stdlib.h>

void main(){
    //definindo uma variável
    int a = 5, b;

    //iprimindo a variável "a"
    printf ("%d", a) ;

    //concatenando
    printf("\no valor da var a : %d", a);

    //mudando o valor de a
    a = 15 ;

    //concatenando
    printf("\no valor da var a : %d\n", a);

    //ler um valor que o usuário vai inserir e tornar esse valor o valor de b
    scanf("%d", &b);

    printf("o valor da var b : %d", b );

    //pular linha
    printf("\n");

    //imprimindo
    printf("uhum");
}


