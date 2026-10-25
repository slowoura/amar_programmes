/*#include <stdio.h>

int main() {
    int i, j, k, l, n;

    scanf("%d", &n);
    int a[n], b[n];

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    b[0] = a[0];

    for(k = 1; k < n; k++){
        for(j = 0; j < k; j++){
            if(a[k] == a[j]){
                b[k]=0;
                break;             // stop when duplicate found
            }

            if(j == k - 1){        // last check → unique
                b[k] = a[k];
            }
        }
    }

    for(l = 0; l < n; l++){
        if(b[l] != 0){               // avoid uninitialized garbage
                        if(l==n-1){
                printf("%d", b[l]);
                break;
            }
            printf("%d ", b[l]);
        }

    }

    return 0;
}
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0; i < n; i++){
        int j;
        for(j = 0; j < i; j++) if(a[i] == a[j]) break;
        if(i == j) printf("%d ", a[i]);
    }

    return 0;
}
