#include <stdio.h>
#define MAX 2000  // যথেষ্ট বড় array, 100! এর জন্য

// multiply x with number represented by res[]
int multiply(int x, int res[], int res_size) {
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

void printFactorial(int n) {
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    // print result in reverse
    for (int i = res_size - 1; i >= 0; i--)
        printf("%d", res[i]);
    printf("\n");
}

int main() {
    for (int i = 1; i <= 100; i++) {
        printf("%d! = ", i);
        printFactorial(i);
    }
    return 0;
}
