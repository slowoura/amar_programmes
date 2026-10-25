#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char word[10][21];
        int n = 0;

        // Take words
        while (scanf("%s", word[n]) == 1)
        {
            n++;

            if (n == 10)
                break;

            char c = getchar();

            if (c == '\n')
                break;
        }

        // First calculate n!
        long long total = 1;

        for (int i = 1; i <= n; i++)
        {
            total = total * i;
        }

        // Find repeated words
        for (int i = 0; i < n; i++)
        {
            int alreadyCounted = 0;

            // Check whether this word was counted before
            for (int j = 0; j < i; j++)
            {
                if (strcmp(word[i], word[j]) == 0)
                {
                    alreadyCounted = 1;
                    break;
                }
            }

            // If already counted, don't count again
            if (alreadyCounted == 1)
                continue;

            // Count this word
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (strcmp(word[i], word[j]) == 0)
                {
                    count++;
                }
            }

            // Divide by count!
            for (int j = 1; j <= count; j++)
            {
                total = total / j;
            }
        }

        printf("1/%lld\n", total);
    }

    return 0;
}
