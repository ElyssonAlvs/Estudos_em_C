#include <stdio.h>
void main()
{
    //ENTRADA DE DADOR
    int contador, i = 0;
    scanf("%d", &contador);
    int valor[contador];
    //UM "FOR" CAMUFLADO DE WHILE
    while(i < contador)
    {
        scanf("%d", &valor[i]);
        i++;
    }
    //LOGICA DA COISA
    i = 0;
    while(i < contador)
    {
        if(valor[i] % 2 != 0)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
}
