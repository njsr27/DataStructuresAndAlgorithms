#include "stdio.h"
#include "time.h"

/**
 * Fibonacci series
 *
 *   n    = 00 01 02 03 04 05 06 07 08 09 10 11 012 013 014
 * output = 00 01 01 02 03 05 08 13 21 34 55 89 144 233 377
 */

int fibonacciRecursive(int n){
    if(n < 2)
        return n;

    return fibonacciRecursive(n - 2) + fibonacciRecursive(n - 1);
}

int fibonacciLoop(int n){
    if(n < 2)
        return n;

    int prev = 0;
    int next = 1;

    for (int i = 1; i < n; i++) {
        next = next + prev;
        prev = next - prev;
    }

    return next;
}

int main(){
    printf("-------------------------\n");

    for (int i = 0; i < 50; ++i) {
        printf("\tn\t= %d\n", i);
        //printf("Output\t= %d\n", fibonacciRecursive(i));
        printf("Output\t= %d\n", fibonacciLoop(i));
        printf("-------------------------\n");
    }

    return 0;
}
