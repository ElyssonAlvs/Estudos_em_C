#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcularRaizes(int a, int b, int c, float *raiz1, float *raiz2){
    //LOGICA DA COISA
    float delta = (pow(b,2) - 4 * a * c);
    if(delta >= 0){
        //RAIZES QUE EXISTEM
        *raiz1 =((-1*b) + sqrt(delta)) / 2*a;
        *raiz2 =((-1*b) - sqrt(delta)) / 2*a;
        return 1;
    }else return 0; //NÃO EXISTE RAÍZES


}
void main(){
    //COEFICIENTES
    int a, b, c;
    //RAIZES
    float raiz1, raiz2;
    //RECEBER OS COEFICIENTES
    scanf("%d %d %d", &a, &b, &c);
    //CHAMANDO A FUNÇÃO
    int bhaskara = calcularRaizes(a, b, c, &raiz1, &raiz2);
    //RESPOSTA
    printf("%d %.2lf %.2lf", bhaskara, raiz1, raiz2);
}
