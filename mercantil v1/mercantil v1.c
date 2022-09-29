#include <stdio.h>
void main(){
    float v1, v2, vt;
    scanf("%f %f %f", &vt, &v1, &v2);
     if (v1 != v2){
        if(vt>v1 && vt>v2){
            if(vt-v1>vt-v2){
                printf("segundo");
            }else{
                printf("primeiro");
            }
        }else if(vt<v1 && vt<v2){
            if(v1-vt>v2-vt){
                printf("segundo");
            }else{
                printf("primeiro");
            }
        }else if(vt>v1 && vt<v2){
            if(vt-v1>v2-vt){
                printf("segundo");
            }else{
                printf("primeiro");
            }
        }else if(vt<v1 && vt>v2){
            if(v1-vt>vt-v2){
                printf("segundo");
            }else{
                printf("primeiro");
            }
        }
    }else
    printf("empate");
}
