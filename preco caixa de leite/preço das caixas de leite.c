#include <stdio.h>
#include <stdlib.h>

void main(){
    int cax;
    float quant, prec, total;
    printf("Quantas caixas de leite voce comprou?\n");
    scanf("%d", &cax);
    printf("De quanto foi o gasto total ?\n");
    scanf("%f", &total);
    prec = total / cax;
    printf("Baseado na quantidade de caixas, o preço, uniforme, de cada caixa foi : R$ %2.2f reais.", prec);
}
