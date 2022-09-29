#include <stdio.h>
#include <math.h>
//FUNÇÃO 'DOUBLE' PORQUE O NÚMERO COMO RESULTADO É MUITO GRANDE
//USO DA BIBLIOTECA 'MATH' PARA FAZER A POTÊNCIA
double pg(int a1, int razao, int posicao){
    double an = a1 * (pow(razao, posicao - 1));
    return an;
}
void main(){
    double a, b, c;
    //RAZÃO, PRIMEIRO ELEMENTO, QUAL O TERMO DA PG(n)
    scanf("%lf %lf %lf", &b, &a, &c);
    double n_esimo = pg(b, a, c);
    printf("%.0f", n_esimo);

}


