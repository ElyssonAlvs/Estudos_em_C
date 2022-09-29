#include <stdio.h>

void main()
{
    int quantidade_produtos, contador = 0;
    float carteira;
    scanf("%d %f", &quantidade_produtos, &carteira);

    for(int i = 1; i <= quantidade_produtos; i++){

        float preco_produto;

        scanf("%f", &preco_produto);

        if(valor-_produto <= carteira)
        {
            contador++;
            carteira -= preco_produto;
        }
    }
    printf("%d", contador);
}
