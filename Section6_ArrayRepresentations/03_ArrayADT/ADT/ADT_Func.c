#include "stdio.h"
#include "stdlib.h"
#include "ADT.c"

struct Array Array_New(int size) {
    struct Array arr;
    arr.size = size;
    arr.A = (int *) malloc(arr.size * sizeof(int));
    arr.length = 0;
    return arr;
}

void Array_Display(struct Array *arr) {
    printf("= Numbers in array =\n\n");

    for (int i = 0; i < arr->length; ++i) {
        printf("%d ", arr->A[i]);
    }

    printf("\n");
}

void Array_Add(struct Array *arr, int element) {
    if (arr->size == arr->length) {
        __expand(arr);
    }

    arr->A[arr->length] = element;
    arr->length++;
}

int Array_Insert(struct Array *arr, int index, int value) {
    if (index > arr->length) {
        printf("== INDEX OUT OF BOUNDS EXCEPTION ==\n");
        return 0;
    } else {
        if (arr->size == arr->length) {
            __expand(arr);
        }

        for (int i = arr->length; i > index; --i) {
            arr->A[i] = arr->A[i - 1];
        }

        arr->A[index] = value;
        arr->length++;
        return 1;
    }
}

int Array_Delete(struct Array *arr, int index) {
    if (index >= arr->length) {
        printf("== INDEX OUT OF BOUNDS EXCEPTION ==\n");
        return 0;
    } else {

        for (int i = index; i < arr->length - 1; ++i) {
            arr->A[i] = arr->A[i + 1];
        }

        arr->length--;
        return 1;
    }
}

int Array_Search_Linear(struct Array *arr, int element) {
    for (int i = 0; i < arr->length; ++i) {
        if(arr->A[i] == element){
            return i;
        }
    }

    return -1;
}