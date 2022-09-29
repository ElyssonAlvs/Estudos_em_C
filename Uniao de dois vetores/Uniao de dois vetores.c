#include <stdio.h>
void main()
{
    //ENTRADA DE DADOS
    int tamanho1, tamanho2, soma = 0 ;
    scanf("%d", &tamanho1) ;
    int valor1[tamanho1] ;
    for(int i = 0; i < tamanho1; i++)
    {
        scanf("%d", &valor1[i]) ;
    }
    scanf("%d", &tamanho2) ;
    int valor2[tamanho2] ;
    for(int i = 0; i < tamanho2; i++)
    {
        scanf("%d", &valor2[i]) ;
    }
    //LOGICA DA COISA
    soma = tamanho1 + tamanho2 ;
    int total[soma] ;
    for(int i = 0; i < tamanho1; i++)
    {
        total[i] = valor1[i] ;
    }
    for(int i = tamanho1, b = 0; i < soma; i++, b++)
    {
        total[i] = valor2[b] ;
    }
    printf("%d\n", soma) ;
    for(int i = 0; i < soma; i++)
    {
        printf("%d ", total[i]) ;
    }
}
