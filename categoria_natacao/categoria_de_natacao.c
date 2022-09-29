#include <stdio.h>
void main(){
    int idd;
    scanf("%d", &idd);
    if (idd < 3) printf("fralda");
    else if ((idd > 3) && (idd < 5)) printf("baby");
    else if ((idd > 5) && (idd < 7)) printf("kid");
    else if ((idd > 7) && (idd < 12)) printf("juvenil");
    else if ((idd > 7) && (idd < 19)) printf("jovem");
    else if (idd > 19) printf("nao permitido");
}
