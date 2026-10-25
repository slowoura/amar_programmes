#include<stdio.h>
#include<string.h>
int main(){
    int T,i;

        int n,j;
        long long f=1;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            f=f*(n-j);

        }
        printf("%lld\n",f);

return 0;}
