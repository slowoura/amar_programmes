#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k, l, T;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        int nu, mb, er;
        scanf("%d%d%d", &nu, &mb, &er);

        if(nu<er && nu<mb && er<mb){
           printf("Case %d: %d %d %d\n", i+1, nu, er, mb);
        }
        else if(nu>er && nu>mb && er>mb){
            printf("Case %d: %d %d %d\n", i+1, mb, er, nu);  //8,2
        }
        else if(nu>er && nu<mb && er<mb){
            printf("Case %d: %d %d %d\n", i+1, er, nu, mb);
        }
        else if(nu<er && nu<mb && er>mb){
            printf("Case %d: %d %d %d\n", i+1, nu, mb, er);
        }
        else if(nu<er && nu>mb && er>mb){
            printf("Case %d: %d %d %d\n", i+1, mb, nu, er);
        }
        else if(nu>er && nu>mb && er<mb){
            printf("Case %d: %d %d %d\n", i+1, er, mb, nu);
        }
    }

    return 0;
}
