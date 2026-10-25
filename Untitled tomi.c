#include<stdio.h>
int facto(int k){
         int i,n=k,j;
        int f=1;

        for(j=0;j<n;j++){
            f=f*(n-j);

        }

return f;}


int main(){

    int i,T;
 // printf("enter the number of line that will be inputed\n");
    scanf("%d",&T);
    getchar();  // Clear newline from input buffer
    for(i=0;i<T;i++){
        int k=1,j;
        char str[250];
       //printf("enter the str line\n") ;
                      // here in my code there are word limitation still it hadnt create any barrier
       fgets(str, sizeof(str), stdin);

       for(j=0; str[j]!='\0'; j++){

    if(str[j] == ' '){

        if(j == 0)
            continue;

        if(str[j-1] == ' ')
            continue;

        int x = j + 1;

        while(str[x] == ' ')
            x++;

        if(str[x] == '\n' || str[x] == '\0')
            continue;

        k++;
    }

}
         printf("1/%d\n",facto(k));
    }

return 0; }
