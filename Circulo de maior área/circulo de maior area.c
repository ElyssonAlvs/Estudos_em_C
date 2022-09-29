#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

typedef struct{
    float x,y; // COORDENADAS DO PONTO
}Ponto;

typedef struct{
    float raio; //RAIO DO CÍRCULO
    Ponto centro; //CENTRO CÍRCULO
}Circulo;
/*
VARIÁVEIS GLOBAIS
Visíveis em qualquer lugar após sia declaração,
mas é bom evitá-las;
*/

float calcular_area(Circulo c){
    return c.raio*c.raio*PI;
}

float maior_area(Circulo circulos[], int n){
    float maior_area = calcular_area(circulos[0]);
    for(int i = 0; i < n; i++){
        float a = calcular_area(circulos[i]);
        if(a > maior_area) maior_area = a;
    }

    return maior_area;
}




int main(){
    int n;//QUANTIDADE DE CIRCULOS
    scanf("%d", &n);
    Circulo vet[n];

    for(int i = 0; i < n; i++){
        //float x, y, r;
        scanf("%f %f %f", &vet[i].centro.x, &vet[i].centro.y, &vet[i].raio);

        //vet[i].raio = r;
        //vet[i].centro.x = x;
        //vet[i].centro.y = y;

    }

    //float maior = maior_area(vet, n);
    printf("%.2f", maior_area(vet, n));

    return 1;
}
