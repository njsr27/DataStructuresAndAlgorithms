#include "stdio.h"

/**
 * Taylor series e^x
 */

double exponentiation(int n, int exponent){
    double total = 1;
    int i = 0;

    for (; i < exponent; i++) {
        total = total * n;
    }

    return total;
}

double factorial(int n){
    double total = 1;
    int i = 0;

    for (; i < n; i++) {
        total = total * (n - i);
    }

    return total;
}

double e(int n, int precision){
    double value = 1;
    int i = 1;

    for(; i <= precision; i++){
        value = value + (exponentiation(n, i) / factorial(i));
    }

    return value;
}

int main(){
    printf("%1f", e(3, 10));
}
