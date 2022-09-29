#include <stdio.h>
#include <stdlib.h>

/*
int numeros[n]; aloca��o est�tica
int valor; aloca��o est�tica

C vai ao SO e pede 1K de mem�ria, o SO devolve o
endere�o dessa me�ria.

Aloca��o din�mica de um float

sizeof(tipo_de_vari�vel)
Recebe o tipo de vari�vel, devolver a quantidade de
mem�ria/tamanho que a vari�vel precisa para a vai�vel
funcionar.

sizeof(float)


A fun��o malloc vai fazer a comunica��o entre
o programador e o SO, ele vai retornar um endere�o
de mem�ria, a quantidade de mem�ria que o programador
quer alocar.

Converter o endere�o para um endere�o de ponteiro float

float* ptf = (float*)malloc(sizeof(float));

Converter o endere�o para um endere�o de ponteiro int

int* pti = (int*)malloc(sizeof(int));

Se dentro de um la�o "for", voc� n�o precisar mais de uma aloca��o
de mem�ria, use a fun��o free(), com o par�metro dizendo qual endere�o
de mem�ria voc� n�o precisa mais.


Para alocar dinamicamente um vetor de double de tamanho n, eu preciso
de n vezes o tamanho de um double
sizeof(double) -> tamanho de uma vari�vel double
n*sizeof(tipo_variavel);

double valores[n];
double* valores = (double*)malloc(n*sizeof(float));
Caso nao tenha memoria suficiente
if(valores == NULL){
    printf("Lascou, nao tem memoria")
    exit(-1);
}
valores[0] = 45.89;
valores[5] = 14.78;

free(valores);
*/

int main(){
    int n;
    scanf("%d", &n);

    int* vet = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++) scanf("%d", &vet[i]);

    for(int i = 0; i < n; i++) if(vet[i] % 2 == 0) vet[i]++;

    for(int i = 0; i < n; i++) printf("%d ", vet[i]);


    free(vet);

}
