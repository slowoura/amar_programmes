#include <stdio.h>
#include <math.h>

int main() {
    int T, N;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);
        int divisors[100000];
        int count = 0;

        for (int i = 1; i <= sqrt(N); i++) {
            if (N % i == 0) {
                divisors[count++] = i;
                if (i != N / i) {
                    divisors[count++] = N / i;
                }
            }
        }

        // Bubble Sort (for small input size)
        for (int i = 0; i < count - 1; i++) {
            for (int j = 0; j < count - i - 1; j++) {
                if (divisors[j] > divisors[j + 1]) {
                    int temp = divisors[j];
                    divisors[j] = divisors[j + 1];
                    divisors[j + 1] = temp;
                }
            }
        }

        printf("Case %d:", t);
        for (int i = 0; i < count; i++) {
            printf(" %d", divisors[i]);
        }
        printf("\n");
    }

    return 0;
}
