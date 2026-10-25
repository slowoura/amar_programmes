#include <stdio.h>

int main(){
    int i,j,k,N,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        for(j=0;j<N;j++){
             for(k=0;k<N;k++){
                printf("*");
            }
            printf("\n");
        }
        if (i != T) {
            printf("\n");
        }
    }







return 0; }
