#include <stdio.h>
void main()
{
    int valor, soma = 0 ;
    while(soma < 1000) //ENTRADA DE DADOS AT� A CONDI��O SER ATINGIDA
    {
        scanf("%d", &valor);
        soma += valor; //REALIZA A SOMA DOS VALORES
    }
    printf("%d", soma);

}
