#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printNumbers(int a[], int length){

    printf("Numbers are: \n");

    for(int i = 0; i < length; i ++)
        printf("%d ", a[i]);

    printf("\n");
}

int main() {

    // Parameters passed by address

    int a = 10;
    int b = 20;

    swap(&a, &b);

    printf("Swapped values are a = %d and b = %d \n\n", a, b);

    // Arrays as parameters

    int array[5] = {2,4,6,8,10};

    printNumbers(array, sizeof(array) / sizeof(int));

    return 0;

}

