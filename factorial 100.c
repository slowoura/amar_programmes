#include<stdio.h>
int main(){
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        int n,k,l,m,j;
        scanf("%d",&n);
        m=n/5;
        k=m/5;
       printf("%d\n",m+k);
    }
return 0;}
