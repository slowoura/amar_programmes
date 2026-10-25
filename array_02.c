#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int table[100][100];//it starts from 0,1,3,4,5....
    int i,j,k,n;
    for(j=1;j<=100;j++){

        for(i=1;i<=100;i++){
        table[i-1][j-1]=i*j;  //as we cant multiply 0 with any of integer so
        }                    //thats why we have to asign at first 1

    }
    scanf("%d",&n);
    for(k=1;k<=100;k++){
        printf("%d # %d = %d\n",n,k,table[n-1][k-1]);
    }















return 0;
}
