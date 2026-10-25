#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
   // getchar(); // এটি আগের newline খেয়ে ফেলবে

    for (int i = 0; T >i ; i++) {
        char str[100]; // ৫টি অঙ্ক + ১টি null terminator
        scanf("%s", str);
        int length = strlen(str);
        int first = str[0] - '0';
        int last = str[length-1] - '0';
        int sum = first + last;

        printf("Sum = %d\n", sum);
    }

    return 0;
}
