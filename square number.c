#include<stdio.h>
#include<string.h>


int main(){
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        long int j,k,l=0,m,n;
        scanf("%ld",&j);
        for(k=1;k*k<=j;k++){         //in condition we use k*k insted l*l becuase l is not fixed
            l=j/k;                   /*1 The condition check happens before every iteration, including the first one.
                                      2 If it’s false, the loop body is skipped altogether.
                                      3 So l remains uninitialized, holding whatever random value was in that memory location.
                                      4 so now if i initialize the l at the first as zero then there is no afraid of random initialization for skiping the loop
                                      5 And random*random !=j */
            if(l==j/l){  //l*l==j
                break;
            }
        }
        if(l*l==j){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

return 0;}
