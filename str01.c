#include<stdio.h>
int main(){

char str[100];
int length=0,i,j,k;

gets(str);
  for(i=0;str[i]!='\0';i++){

    length=length+1;
  }

  for(j=length-1;j>=0;j--){
    printf("%c",str[j]);

 }


return 0;}
