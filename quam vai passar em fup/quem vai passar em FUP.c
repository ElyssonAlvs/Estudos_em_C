#include <stdio.h>
#define TAM_NOME 100
#define QTD_NOTAS 3

typedef struct{
      char nome[TAM_NOME];
      float notas[QTD_NOTAS];
      float media;
}Aluno;

int main(){
    int n;
    scanf("%d", &n);
    Aluno alunos[n];
    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", alunos[i].nome);

        for(int j = 0; j < QTD_NOTAS; j++){
            scanf("%f", &alunos[i].notas[j]);
        }
        //scanf("%f %f %f", &alunos[i].notas[0],&alunos[i].notas[1], &alunos[i].notas[2]);
    }

    float media_geral;
    scanf("%f", &media_geral);

    for(int i = 0; i < n; i++){
        float media = 0.0;
        for(int j = 0; j < QTD_NOTAS; j++) media += alunos[i].notas[j];
        media /= QTD_NOTAS;
        //float media = alunos[i].notas[0] + alunos[i].notas[0] + alunos[i].notas[0] / 3.0;
        alunos[i].media = media;
    }
    for(int i = 0; i < n; i++){
        if(alunos[i].media >= media_geral)
            printf("%s\n", alunos[i].nome);
    }
    return 1;
}
