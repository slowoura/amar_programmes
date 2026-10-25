#include <stdio.h>
int minimum(int  k, int l){
    int temp;

    if(k>l){
        temp=l;
    }
    else{
        temp=k;
    }
    return temp;
}

int main(){


    int a,b,smaller,c,last;
    printf("enter your numbers\n");

    scanf("%d%d%d",&a,&b,&c);

    smaller=minimum(a,b);
    last=minimum(smaller, c);


    printf("the smaller number is :%d",last);


return 0;       }
