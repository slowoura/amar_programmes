#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);
    getchar();  // Clear newline after number input

    for (int i = 0; i < T; i++) {
        char str[1000];
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';  // Remove newline

        int count = 0, inWord = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (!isspace(str[j])) {       // Not a space
                if (!inWord) {            // Word starts
                    count++;
                    inWord = 1;
                }
            } else {
                inWord = 0;               // Word ends
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
