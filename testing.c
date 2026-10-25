#include <stdio.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);  // read full line including spacedf gd gds

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {  // check if character is a space
            count++;
        }
    }

    printf("Number of spaces: %d\n", count);

    return 0;
}
