#include <stdio.h>
#include <stdlib.h>

/*
    > maior que
    < menor que
    <= menor ou igual
    >= maior ou igual
    != não igual ou diferente (a diferente de b)
    == igual (a igual b)



*/

void main(){
    int a,b;

    printf("Informe o primeiro numero : \n");
    scanf("%d", &a);
    printf("Informe o segundo numero : \n");
    scanf("%d", &b);
    if (a > b){
        printf("\n %d e maior que %d\n", a,b);
    }
    else if (a==b){
        printf("\n %d e igual a %d\n", a, b);
    }
    else{
        printf("\n %d menor que %d\n", a, b);
    }
}
