#include <stdio.h>

int main() {
    int age;
    char ch;

    // Prompt and read age
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    // Clear the newline character left by scanf
    getchar();

    // Prompt and read a character
    printf("Enter a character: ");
    ch = getchar();  // Now it should wait for new input
    printf("%c is the character you entered.\n", ch);

    return 0;
}

