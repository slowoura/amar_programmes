#include <stdio.h>

int main(){
    int str[200000];
    int T,N,i,j,k;
    scanf("%d",&T);

    for(i=1;i<=T;i++){

        scanf("%d",&N);
        printf("Case %d:" ,i);

        if (N<=100000&&N>=1){

            for(j=1;j*j<=N;j++){ //setting divisors

                if(N%j==0){
                    for(k=j;k<=j;k++){
                    printf(" %d",j);
                    }
                }
            }
        }
           printf("\n");
    }




return 0; }
