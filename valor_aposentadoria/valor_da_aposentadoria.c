#include <stdio.h>
void main (){
    char sexo;
    float valor_mensal;
    int tempo_contribuicao, idd;
    scanf("%s %d %d %f", &sexo, &idd, &tempo_contribuicao, &valor_mensal);
    if (sexo == 'M'){
        float total_contribuicao, valor_aposentadoria, p, receber, tempo_recebendo;
        total_contribuicao = tempo_contribuicao*valor_mensal;
        tempo_recebendo = (100-idd) * 12;
        valor_aposentadoria = total_contribuicao/tempo_recebendo;
        if (idd<90){
            scanf("%f", &p);
            p = p/100;
            receber = valor_aposentadoria + (p*valor_aposentadoria);
            printf("%.2f", receber);
        }else if (idd>90){
            receber = valor_aposentadoria + (0.5*valor_aposentadoria);
            printf("%.2f", receber);
        }
    }else if (sexo == 'F'){
        float total_contribuicao, valor_aposentadoria, p, receber, tempo_recebendo, salario_minimo;
        total_contribuicao = tempo_contribuicao*valor_mensal;
        tempo_recebendo = (100-idd) * 12;
        valor_aposentadoria = total_contribuicao/tempo_recebendo;
        scanf("%f %f", &salario_minimo, &p);
        p = p/100;
        receber = valor_aposentadoria + (p*valor_aposentadoria);
        if (valor_aposentadoria<salario_minimo){
            printf("%f", salario_minimo);
        }else printf("%.2f", receber);
        }
    }
