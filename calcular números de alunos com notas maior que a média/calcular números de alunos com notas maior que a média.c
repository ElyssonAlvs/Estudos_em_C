#include <stdio.h>

int main(){
    //quantidade de alunos
    int n;
    scanf("%d", &n);
    //somatorio para m�dia
    float media_turma = 0.0;
    //declarado o vetor que vai armazenar as notas
    float notas[n];
    //pegar as notas e guarda-las dentro da vari�vel media_turma
    for(int i = 0; i < n; i++){
        scanf("%f", &notas[i]);
        media_turma += notas[i];
    }
    //calcular a m�dia da turma
    media_turma /= n;
    //contar a quantidade de pessoas que tiveram a nota maior que a m�dia
    int qtd = 0;
    //verificar se a m�dia a nota � maior q a m�dia e contar quantas pessoas passaram
    for(int i = 0; i < n; i++){
        if(notas[i] >= media_turma) qtd++;
    }
    //imprimir a quantidade e a m�dia da turma
    printf("%d %.2f", qtd, media_turma);

}
