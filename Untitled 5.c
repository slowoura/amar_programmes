#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char str[6];          // 5 digits + '\0'
        int  N[5];

        /* read exactly 5 non‑whitespace characters */
        for (int j = 0; j < 5; j++)
            scanf(" %c", &str[j]);   // leading space skips whitespace
        str[5] = '\0';               // null‑terminate

        /* convert chars to ints */
        for (int j = 0; j < 5; j++)
            N[j] = str[j] - '0';

        int k = N[0] + N[4];         // sum first and last digit
        printf("Sum = %d\n", k);
    }
    return 0;
}
