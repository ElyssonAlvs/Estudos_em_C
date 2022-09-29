#include <stdio.h>

int main(){
    //quantidade de alunos
    int n;
    scanf("%d", &n);
    //somatorio para média
    float media_turma = 0.0;
    //declarado o vetor que vai armazenar as notas
    float notas[n];
    //pegar as notas e guarda-las dentro da variável media_turma
    for(int i = 0; i < n; i++){
        scanf("%f", &notas[i]);
        media_turma += notas[i];
    }
    //calcular a média da turma
    media_turma /= n;
    //contar a quantidade de pessoas que tiveram a nota maior que a média
    int qtd = 0;
    //verificar se a média a nota é maior q a média e contar quantas pessoas passaram
    for(int i = 0; i < n; i++){
        if(notas[i] >= media_turma) qtd++;
    }
    //imprimir a quantidade e a média da turma
    printf("%d %.2f", qtd, media_turma);

}
