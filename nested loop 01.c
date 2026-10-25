#include <stdio.h>
int main(){
    int n=0,m=0;
    for(n=1;n<=4;n++){
        printf("n=%d \n",n);             //m=1 is working not m=0
                                        //outer loop er jonno n er man duibar execute hoy its called iteration

            for(m=1;m<=1000;m++){
            printf("n=%d m=%d\n",n,m);
            if(m<=4){
                break;
            }
        }
    }


















                return 0;







                }
