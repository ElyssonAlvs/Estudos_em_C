#include <stdio.h>
#include <math.h>
//FUN��O 'DOUBLE' PORQUE O N�MERO COMO RESULTADO � MUITO GRANDE
//USO DA BIBLIOTECA 'MATH' PARA FAZER A POT�NCIA
double pg(int a1, int razao, int posicao){
    double an = a1 * (pow(razao, posicao - 1));
    return an;
}
void main(){
    double a, b, c;
    //RAZ�O, PRIMEIRO ELEMENTO, QUAL O TERMO DA PG(n)
    scanf("%lf %lf %lf", &b, &a, &c);
    double n_esimo = pg(b, a, c);
    printf("%.0f", n_esimo);

}


