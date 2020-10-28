#include <stdio.h>

int exponentiation(int n, int exponent){
    int total = 1;
    int i = 0;

    for (; i < exponent; i++) {
        total = total * n;
    }

    return total;
}

int main() {
    printf("%d", exponentiation(2, 5));
    return 0;
}