#include <stdio.h>
//definindo a estrutura de dados do tipo Data
typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

int datas_iguais(Data d1, Data d2){
    //se os dias, meses e anos forem iguais
    if(d1.dia == d2.dia && d1.mes == d2.mes
        && d1.ano == d2.ano) return 1;
    else return 0;
}

int main(){
    //pegar a primeira data
    Data dt1;
    scanf("%d/%d/%d", &dt1.dia, &dt1.mes, &dt1.ano);
    //pegar a segunda data
    Data dt2;
    scanf("%d/%d/%d", &dt2.dia, &dt2.mes, &dt2.ano);

    if(datas_iguais(dt1, dt2)) printf("Iguais");
    else printf("Diferentes");


}
