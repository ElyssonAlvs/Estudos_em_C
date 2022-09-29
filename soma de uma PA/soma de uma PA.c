#include <stdio.h>
/*a1, a2, a3 ,a4 ..., an
a1 + a2 + a3 + a4, ..., an

Sn = ((a1 + an)*n)/2
*/
int pa(int a1, int r, int n){
    int an = a1 + (n-1)*r;
    return an;
}

float soma_pa(int a1, int an, int n){
    return ((a1 + an)*n)/2.0;
}

int main(){
    int a, b, c;
    //RAZÃO, PRIMEIRO ELEMENTO, QUAL O TERMO DA PA(n)
    scanf("%d %d %d", &b, &a, &c);
    int an = pa(b, a, c);
    float soma= soma_pa(b, an, c);
    //PRIMEIRO TERMO, N_ÉSIMO TERMO, RAZÃO
    printf("%d %d %2.f", b, an, soma);
    return 1;
}
