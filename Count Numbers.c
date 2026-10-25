#include<stdio.h>

int main(){

    int i,j,T;

    scanf("%d",&T);
    getchar();  // Clear newline from input buffer
    for(i=0;i<T;i++){
        int k=1;
        char str[1000]; // here in my code there are word limitation still it hadnt create any barrier
        gets(str);
        for(j=0;str[j]!='\0';j++){
            if(str[j] == ' '){
                k++ ; //no solution of extra space counting
            }
        }
         printf("%d\n",k);
    }





return 0; }
