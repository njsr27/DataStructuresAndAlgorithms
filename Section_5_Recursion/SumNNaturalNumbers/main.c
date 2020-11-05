#include <stdio.h>

/**
 * Sum of first 'n' Natural Numbers using recursion, loop, and formula
 */

int sumRecursion(int n){
    if(n > 0) {
        return n + sumRecursion(n - 1);
    } else {
        return 0;
    }
}

int sumFormula(int n){
    return (n * (n+1)) /2;
}

int sumIteration(int n){
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum = sum + i;
    }

    return sum;
}

int main() {

    int n = 0;

    printf("===Sum of first 'n' Natural Numbers using recursion, loop, and formula===\n");
    printf("Enter a number: \n\n");
    scanf("%d", &n);
    printf("\n");

    printf("The sum of the first N numbers is: %d\n", sumRecursion(n));
    printf("The sum of the first N numbers is: %d\n", sumFormula(n));
    printf("The sum of the first N numbers is: %d\n", sumIteration(n));

    printf("\n");

    return 0;
}
