#include <stdio.h>

int main() {
    int hash = 0;
    char s[] = "abc";

    for(int i = 0; s[i] != '\0'; i++){
        hash = (hash * 31 + s[i]) % 1000000007;   // modular arithmetic
    }

    printf("Hash = %d\n", hash);
}
