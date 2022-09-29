#include <stdio.h>
void main(){
    char regra1, regra2, regra3, regra4;
    float valor_renda_mensal, valor_emprestimo;
    int quantidade_parcela, quantidade_carros, quantidade_casas, quantidade_apartamentos, credito, valor_parcela;
    scanf("%c %c %c %c", &regra1, &regra2, &regra3, &regra4);

    credito = 0;

    if (regra1 == 'S') credito = credito + 100;
    if (regra2 == 'S') credito = credito + 200;
    if (regra3 == 'S') credito = credito + 200;

    scanf("%f %f %d", &valor_renda_mensal, &valor_emprestimo, &quantidade_parcela);
    if (valor_emprestimo <= valor_renda_mensal * 2) credito = credito + 200;
    if (valor_emprestimo <= valor_renda_mensal * 3) credito = credito + 100;
    if (valor_emprestimo <= valor_renda_mensal * 4) credito = credito + 50;

    if(regra4 == 'S'){
        scanf("%d %d %d", &quantidade_carros, &quantidade_casas, &quantidade_apartamentos);
        credito = credito + quantidade_carros* 10 + quantidade_casas * 40 + quantidade_apartamentos * 40;
    }

    valor_parcela = valor_emprestimo/quantidade_parcela;
    if (valor_parcela>0.30 * valor_renda_mensal) credito = 0;
     printf("%d", credito);
}
