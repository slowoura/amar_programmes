#include<stdio.h>


int main(){
    long long T,j,N,l,m,n;
    scanf("%lld",&T);
    if(T>=1 && T<=100){
        for(j=1;j<=T;j++){
          scanf("%lld",&N);
          if(N>=0 && N<=2147483647){
             if(N % 2 == 0){
            printf("even\n");}
             else{
            printf("odd\n");}
        }
            }
        }

    else{
        printf("\nERROR\n");
    }


         return 0; }
