#include <stdio.h> //BIBLIOTECA PADR�O
#include <stdlib.h>
/*
A fun��o retorna um n�mero pseudoaleat�rio no intervalo
entre 0 e RAND_MAX, onde RAND_MAX � um valor bem alto.
*/
#include <time.h>
int main(){
    int i = 0;
    /*
    Esse c�digo muda a semente da fun��o rand
    e evita que sempre ela selecione o mesmo n�mero.
    */
    srand(time(NULL));
    //Chave que o jogador deve acertar entre 0 e 1024(gerar a chave)
    int chave = rand() % 1024 + 1;
    int chute, tentativas = 0;
    //LOGICA DA COISA
    do{
        printf("Tente adivinhar a chave: ");
        scanf("%d", &chute);
        //ENCURTAR AS POSSIBILIDADES PARA O JOGADOR CONSEGUIR ACERTAR
        if(chute < chave) printf("Errooou Menor\n");
        else if(chute > chave) printf("Maior\n");
        else printf("Acertou Mizeravi!!!");
        tentativas++;
    }while(chute != chave);
    printf("Voce precisou de %d tentativas", tentativas);

}
/*
v1 = rand() % 100;         // v1 in the range 0 to 99
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
*/
