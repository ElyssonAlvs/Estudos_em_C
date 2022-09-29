#include <stdio.h>
/*
a1, a2, a3,......, an
a1 = 2
r = 3

a2 = a1 + r
a3 = a2 + r = (a1 + r) + r = a1 + 2r
a4 = a3 + r = (a1 + 2r) + r = a1 + 3r
...
an = an-1 + r

an = a1 + (n-1)*r
*/
//n = POSIÇÃO, r = RAZÃO
int pa(int a1, int r, int n){
    int an = a1 + (n-1)*r;
    return an;
}
//eu posso colocar apenas return an = a1 +(n-1)*r

int main(){
    int a, b, c;
    //RAZÃO, PRIMEIRO ELEMENTO, QUAL O TERMO DA PA(n)
    scanf("%d %d %d", &b, &a, &c);
    int n_esimo = pa(b, a, c);
    printf("%d", n_esimo);
    return 1;
}
