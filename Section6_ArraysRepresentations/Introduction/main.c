#include "stdio.h"
#include "stdlib.h"

/**
 * .What is an array
 * .Declaring and initializing
 * .Accessing and array
 */

void initialization(){
    int array[5] = {1,2,3,4,5};
    int array2[5];
    int array3[5] = {1,2};
    int array4[5] = {};
    int array5[] = {1,2,3,4,5};

    printf("%d", array[3]);
    printf("\n");
    printf("%d", array2[3]);
    printf("\n");
    printf("%d", array3[3]);
    printf("\n");
    printf("%d", array4[3]);
    printf("\n");
    printf("%d", array5[3]);
}

void staticAndDynamic(){

    //static, in Stack memory
    int staticArray[5];

    staticArray[0] = 5;

    //dynamic, in Heap memory (Remember to release the memory)
    int *dynamicArray = (int*) malloc(5 * sizeof(int));

    dynamicArray[0] = 5;

    printf("Reference is cleaned after this point.");

    free(dynamicArray);

}

void resizingArray(){

    int *p = (int*) malloc(5 * sizeof(int));
    int *q = (int*) malloc(10 * sizeof(int));

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    free(p);
    p = q;
    q = NULL;

    for (int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }

    printf("End of the program");

}

int main() {

    //initialization();
    //staticAndDynamic();
    //resizingArray();

    return 0;
}