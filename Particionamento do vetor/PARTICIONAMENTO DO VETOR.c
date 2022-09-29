#include <stdio.h>
int main(){
    int n, pivo;
    scanf("%d", &n);
    int vetorP[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetorP[i]);
    }
    scanf("%d", &pivo);
    int menor = 0, maior = 0;
    int vetorm[n], vetorM[n];
    for(int i = 0; i < n; i++){
        if(vetorP[i] < pivo){
            vetorm[menor] = vetorP[i];
            menor++; 
        }
        else{
            vetorM[maior] = vetorP[i];
            maior++;
        }
    }
    for(int i = 0; i < menor; i++){
        printf("%d ", vetorm[i]);
    }
    printf("\n");
    for(int i = 0; i < maior; i++){
        printf("%d ", vetorM[i]);
    }
}