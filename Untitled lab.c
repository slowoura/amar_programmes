#include <stdio.h>

int main() {
    char ch;

    // Prompt user input
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); // Space before %c to consume any leading whitespace

    // Convert to lowercase for uniformity (optional)
    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            // Check if it's an alphabet letter
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Invalid input! Please enter an alphabet.\n");
            }
            break;
    }

    return 0;
}
