#include "../ADT/ADT_Func.c"
#include "stdlib.h"
#include "stdio.h"

void Initialization_TEST() {
    struct Array arr = Array_New(5);

    printf("Size: %d\n", arr.size);
    printf("Array: %d\n", arr.A);
    printf("Length: %d\n", arr.length);
}

void Display_TEST() {
    struct Array arr = Array_New(5);
    arr.A[0] = 1;
    arr.A[1] = 6;
    arr.A[2] = 5;
    arr.A[3] = 4;
    arr.A[4] = 7;
    arr.length = 5;

    Array_Display(&arr);
    free(arr.A);
}

void Add_TEST() {
    struct Array arr = Array_New(5);
    Array_Add(&arr, 1);
    Array_Add(&arr, 6);
    Array_Add(&arr, 5);
    Array_Add(&arr, 4);
    Array_Add(&arr, 7);
    Array_Add(&arr, 5);
    Array_Add(&arr, 10);
    Array_Add(&arr, 12);
    Array_Add(&arr, 15);
    Array_Add(&arr, 11);
    Array_Add(&arr, 222);

    Array_Display(&arr);
    printf("Size: %d\n", arr.size);
    printf("Length: %d\n", arr.length);

    free(arr.A);
}

void Insert_TEST() {
    struct Array arr = Array_New(5);
    Array_Add(&arr, 1);
    Array_Add(&arr, 6);
    Array_Add(&arr, 5);
    Array_Add(&arr, 7);
    Array_Add(&arr, 8);
    if (Array_Insert(&arr, 5, 10)) {
        Array_Display(&arr);
        printf("Size: %d\n", arr.size);
        printf("Length: %d\n", arr.length);
    };

    free(arr.A);
}

void Delete_TEST() {
    struct Array arr = Array_New(5);
    Array_Add(&arr, 1);
    Array_Add(&arr, 6);
    Array_Add(&arr, 5);
    Array_Add(&arr, 7);
    Array_Add(&arr, 8);

    Array_Display(&arr);
    printf("Size: %d\n", arr.size);
    printf("Length: %d\n", arr.length);

    if (Array_Delete(&arr, 2)) {
        Array_Display(&arr);
        printf("Size: %d\n", arr.size);
        printf("Length: %d\n", arr.length);
    };

    Array_Add(&arr, 99);
    Array_Add(&arr, 88);

    Array_Display(&arr);
    printf("Size: %d\n", arr.size);
    printf("Length: %d\n", arr.length);

    free(arr.A);
}

void Search_Linear_TEST(int element) {
    int elementIndex;
    struct Array arr = Array_New(5);

    //We imply element uniqueness
    Array_Add(&arr, 1);
    Array_Add(&arr, 6);
    Array_Add(&arr, 5);
    Array_Add(&arr, 7);
    Array_Add(&arr, 12);
    Array_Add(&arr, 11);
    Array_Add(&arr, 15);
    Array_Add(&arr, 99);
    Array_Add(&arr, 77);
    Array_Add(&arr, 88);

    elementIndex = Array_Search_Linear(&arr, element);

    if(elementIndex >= 0){
        printf("First element found in index %d. \n", elementIndex);
    } else {
        printf("Element not found. \n");
    }
}

void Search_Binary_TEST(int element) {
    int elementIndex;
    struct Array arr = Array_New(5);

    //We imply element uniqueness
    Array_Add(&arr, 1);
    Array_Add(&arr, 8);
    Array_Add(&arr, 9);
    Array_Add(&arr, 11);
    Array_Add(&arr, 12);
    Array_Add(&arr, 18);
    Array_Add(&arr, 25);
    Array_Add(&arr, 52);
    Array_Add(&arr, 77);
    Array_Add(&arr, 88);

    elementIndex = Array_Search_Binary(&arr, element);

    if(elementIndex >= 0){
        printf("First element found in index %d. \n", elementIndex);
    } else {
        printf("Element not found. \n");
    }
}