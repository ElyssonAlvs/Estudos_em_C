#include <stdio.h>
#include <stdlib.h>
/*
int a; //VARIÁVEL CRIADA
int *p; //VARIÁVEL PONTEIRO CRIADA
a = 15; // VARIÁVEL DECLARADA
p = &a; // A VARIÁVEL "RECEBE" O VALOR DE a, COLOCANDO DENTRO DA MEMORIA RESERVADA
*p = 6; // PEGA O VALOR 6 E ARMAZEA PARA ONDE TÁ APONTANDO NO CASO a, MUDANDO O VALOR DA VARIÁVEL a

float valor;
float *pt;

valor = 25.89;
printf("%.2f\n", valor);

pt = &valor;
printf("%.2f\n", *pt);

*pt = 89.14;
printf("%.2f\n", valor);
/*
NA LINHA 10 IMPRIME -> 25.89
EXECUTANDO A LINHA 14 IMPRIME -> 25.89
POR FIM NA LINHA 17 VAI IMPRIMIR A VARIÁVEL ALTERADA -> 89.14
*/
/*
int main(){
    float valor, soma = 123.56;
    double preco, troco = 56.89;
    char letra, a = 'a';

    float *pt1 = &valor;
    double *pt2 = &preco;
    char *pt3 = &letra;

    *pt1 = soma;
    *pt2 = troco;
    *pt3 = a;

    printf("%.2f %.2f %c", valor, preco, letra);
}
*/
/*
void incrementa(int a){
    a = a + 125;
    printf("%d\n", a);
}
int main(){
    int num = 12;
    printf("%d\n", num);
    incrementa(num);
    printf("%d\n", num);
}
*/
void incrementa(int *a){
    *a = *a + 125;
    printf("%d\n", *a);
}
int main(){
    int num = 12;
    printf("%d\n", num);
    incrementa(&num);
    printf("%d\n", num);
}















