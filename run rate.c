#include<stdio.h>
#include<string.h>

int main(){

    int T,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        double R,r,B,b,rr,cr;
        scanf("%lf%lf%lf",&R,&r,&b);
        B=300-b;
        cr=r/B*6;
        rr=(R+1-r)/b*6;
        printf("%.2f %.2f\n",cr,rr);
    }
return 0;}
