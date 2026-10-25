#include <stdio.h>

int main() {
    int T;

    do {
        printf("Enter T (1 to 100): ");
        scanf("%d", &T);
    } while (T < 1 || T > 100);

    for(int i = 0; i < T; i++) {
        unsigned int N;
        scanf("%u", &N);
        if(N % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}
