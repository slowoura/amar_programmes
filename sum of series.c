#include <stdio.h>
int main(){

     int n,sum=0,start,diff,end;
     printf("Enter your starting and end number with the difference\n ");
     scanf("%d%d%d",&start,&end,&diff);

     for(n=start;n<=end;n=n+diff){
         sum=sum+n;                             //sum+diff="ashole series er next number"//
         printf("sum is %d\n",sum);            //prothom excution e sum=0 diai shuru hobe//

     }
     printf("sum is %d\n",sum);


























  return 0; }
