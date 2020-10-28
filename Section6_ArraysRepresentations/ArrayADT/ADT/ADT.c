#include "stdlib.h"

static int BASE_SIZE = 5;

struct Array {
    int *A;
    int size;
    int length;
};

static void __expand(struct Array *arr) {
    int *B;

    B = (int *) malloc((arr->size + BASE_SIZE) * sizeof(int)); //I create an array bigger than the original
    for (int i = 0; i < arr->length; ++i) {  //I copy all the elements one by one
        B[i] = arr->A[i];
    }
    free(arr->A); // I free Heap memory of previous array
    arr->A = B;  //I set the previous pointer with the address of the new array with bigger capacity, with all the previous data

    arr->size = arr->size + BASE_SIZE;
}