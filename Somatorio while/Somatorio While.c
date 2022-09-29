#include <stdio.h>
void main()
{
    //ENTRADA DE DADOS
    int soma = 0, contador, i = 0 ;
    scanf("%d", &contador) ;
    int valor[contador] ;
    //LOGICA DA COISA
    while(i < contador)
    {
        scanf("%d", &valor[i]) ;
        if(valor[i] < 0)//SER NEGATIVO
        {
            break;//PARA
        }
        soma += valor[i];//SOMA
        i++;
    }
    printf("%d", soma);//IMPRIME A SOMA
}
