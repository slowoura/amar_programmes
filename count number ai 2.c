#include<stdio.h>
#include<string.h>

int main() {
    int i,j,T;

    scanf("%d", &T);
    getchar();  // Clear newline from input buffer

    for(i = 0; i < T; i++) {
        char str[1000];
        int k = 0;       // word count
        int inWord = 0;  // 0 = outside word, 1 = inside word

        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; // remove newline

        for(j = 0; str[j] != '\0'; j++) {
            if(str[j] != ' ') {
                if(inWord == 0) { // word start
                    k++;          //by this nested if we have created a one time couting method of the extra spaces
                    inWord = 1;
                }
            } else {
                inWord = 0;       // word ended
            }
        }

        printf("%d\n", k);
    }

    return 0;
}
