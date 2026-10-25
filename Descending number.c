#include<stdio.h>
int main(){
    int i;
    int num[1000];
    for(i=0;i<1000;i++){
        num[i]=i+1;

    }

    for(i=999;i>=0;i--){
        printf("%d ",num[i]);
        if(i%5==0){
            printf("\n");

        }
    }


return 0;}
