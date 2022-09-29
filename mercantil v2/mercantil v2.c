#include <stdio.h>
void main(){
    float vp, chute1;
    char chute2;
    scanf("%f %f %s", &vp, &chute1, &chute2);
    if (vp==chute1) printf("primeiro");
    else{
        if (((vp>chute1) && (chute2 == 'm'))  ||  ((vp<chute1) && (chute2 == 'M'))) printf("primeiro");
        else printf("segundo");
    }
}
