#include<stdio.h>
int main(){
    int n;
    printf("input the starting number\n");
    scanf("%d",&n);
    while(n<=100){
        if(n%2==0){
            printf("the number %d is even\n",n);//here you cant use "&n" in printf //
        }
        else{
             printf("the number %d is odd\n",n);
        }

        n=n+1;                                 //build the programm more easily without using the function "if"//
    }





    return 0;
}
