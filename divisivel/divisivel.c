#include <stdio.h>
void main (){
    int num, r1, r2, r3;
    scanf("%d", &num);
    r1 = num % 5;
    r2 = num % 3;
    r3 = num % 7;
    if (((r1 = 0) && (r2 = 0)) || (r3 != 0)) printf("SIM");
    else printf("NAO");
}
