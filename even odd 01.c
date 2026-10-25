#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char input[101];      // to store a 100-digit number as string
    int digits[100];      // to store digits as integers

    // Input number of test cases
    do {
        scanf("%d", &T);
    } while (T < 1 || T > 100);

    // Loop through T test cases
    for (int t = 0; t < T; t++) {
        scanf("%s", input); // input as string

        int length = strlen(input);

        // Convert characters to digits
        for (int i = 0; i < length; i++) {
            digits[i] = input[i] - '0';
        }

        // Check last digit
        if (digits[length - 1] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
