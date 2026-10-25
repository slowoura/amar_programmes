#include <stdio.h>

int facto(int k) {
    int n = k;
    int f = 1;

    for (int j = 0; j < n; j++) {
        f = f * (n - j);
    }

    return f;
}

int main() {

    int i, T;

    scanf("%d", &T);
    getchar();

    for (i = 0; i < T; i++) {

        int  j;
        char str[250];

        fgets(str, sizeof(str), stdin);

        int k = 0;
    int inWord = 0;

    for(j = 0; str[j] != '\0'; j++) {

        if(str[j] != ' ' && str[j] != '\n') {
            if(inWord == 0) {
            k++;
            inWord = 1;
            }
        }
        else {
        inWord = 0;
        }
    }

        printf("1/%d\n", facto(k));
    }

    return 0;
}
