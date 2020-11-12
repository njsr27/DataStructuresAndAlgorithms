#include "../ADT/Array_Func.c"
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

    Array_Free(&arr);
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

    Array_Free(&arr);
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

    Array_Free(&arr);
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

    Array_Free(&arr);
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

    if (elementIndex >= 0) {
        printf("First element found in index %d. \n", elementIndex);
    } else {
        printf("Element not found. \n");
    }

    free(arr.A);
}

void Search_Binary_TEST(int element) {
    int elementIndex;
    struct Array arr = Array_New(5);

    //We imply element uniqueness and order
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

    if (elementIndex >= 0) {
        printf("First element found in index %d. \n", elementIndex);
    } else {
        printf("Element not found. \n");
    }

    Array_Free(&arr);
}

void Get_TEST(int index) {
    int elementIndex;
    struct Array arr = Array_New(5);

    Array_Add(&arr, 1);
    Array_Add(&arr, 8);
    Array_Add(&arr, 9);
    Array_Add(&arr, 11);
    Array_Add(&arr, 12);

    elementIndex = Array_Get(&arr, index);

    if (elementIndex >= 0) {
        printf("First element found in index %d. \n", elementIndex);
    } else {
        printf("Element not found. \n");
    }

    Array_Free(&arr);
}

void Set_TEST(int index, int value) {
    struct Array arr = Array_New(5);

    Array_Add(&arr, 1);
    Array_Add(&arr, 8);
    Array_Add(&arr, 9);
    Array_Add(&arr, 11);
    Array_Add(&arr, 12);

    Array_Set(&arr, index, value);

    Array_Display(&arr);

    Array_Free(&arr);
}

void Max_TEST() {
    struct Array arr = Array_New(5);

    Array_Add(&arr, 1);
    Array_Add(&arr, 8);
    Array_Add(&arr, 32);
    Array_Add(&arr, 11);
    Array_Add(&arr, 12);

    printf("Max number in array is: %d", Array_Max(&arr));

    Array_Free(&arr);
}

void Min_TEST() {
    struct Array arr = Array_New(5);

    Array_Add(&arr, 5);
    Array_Add(&arr, 8);
    Array_Add(&arr, 32);
    Array_Add(&arr, 11);
    Array_Add(&arr, 2);

    printf("Min number in array is: %d", Array_Min(&arr));

    Array_Free(&arr);
}

void Sum_TEST() {
    struct Array arr = Array_New(5);

    Array_Add(&arr, 5);
    Array_Add(&arr, 8);
    Array_Add(&arr, 32);
    Array_Add(&arr, 11);
    Array_Add(&arr, 2);

    printf("The sum of the elements in the array is: %d", Array_Sum(&arr));

    Array_Free(&arr);
}

void Avg_TEST() {
    struct Array arr = Array_New(5);

    Array_Add(&arr, 5);
    Array_Add(&arr, 8);
    Array_Add(&arr, 32);
    Array_Add(&arr, 11);
    Array_Add(&arr, 2);

    printf("The avg of the elements in the array is: %.2f", Array_Avg(&arr));

    Array_Free(&arr);
}

void Reverse_TEST() {
    struct Array arr = Array_New(5);

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

    arr = Array_Reverse(&arr);
    Array_Display(&arr);

    Array_Free(&arr);
}

void Left_Shift_TEST() {
    struct Array arr = Array_New(5);

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

    Array_Left_Shift(&arr);
    Array_Left_Shift(&arr);
    Array_Left_Shift(&arr);
    Array_Display(&arr);

    Array_Free(&arr);
}

void Left_Rotate_TEST() {
    struct Array arr = Array_New(5);

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

    Array_Left_Rotate(&arr);
    Array_Left_Rotate(&arr);
    Array_Left_Rotate(&arr);
    Array_Display(&arr);

    Array_Free(&arr);
}

void Right_Shift_TEST() {
    struct Array arr = Array_New(5);

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

    Array_Right_Shift(&arr);
    Array_Right_Shift(&arr);
    Array_Right_Shift(&arr);
    Array_Display(&arr);

    Array_Free(&arr);
}

void Right_Rotate_TEST() {
    struct Array arr = Array_New(5);

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

    Array_Right_Rotate(&arr);
    Array_Right_Rotate(&arr);
    Array_Right_Rotate(&arr);
    Array_Display(&arr);

    Array_Free(&arr);
}

void Insert_Sorted_TEST(int value) {
    struct Array arr = Array_New(5);
    Array_Add(&arr, 1);
    Array_Add(&arr, 3);
    Array_Add(&arr, 5);
    Array_Add(&arr, 7);
    Array_Add(&arr, 8);
    if (Array_Insert_Sorted(&arr, value)) {
        Array_Display(&arr);
        printf("Size: %d\n", arr.size);
        printf("Length: %d\n", arr.length);
    };

    Array_Free(&arr);
}

void Array_Is_Sorted_TEST() {
    struct Array arr = Array_New(5);
    Array_Add(&arr, 1);
    Array_Add(&arr, 3);
    Array_Add(&arr, 6);
    Array_Add(&arr, 7);
    Array_Add(&arr, 8);

    if (Array_Is_Sorted(&arr)) {
        printf("Array is sorted!");
    } else {
        printf("Array is not sorted!");
    }

    Array_Free(&arr);
}

void Array_Negative_Positive_TEST() {
    struct Array arr = Array_New(5);

    Array_Add(&arr, 10);
    Array_Add(&arr, 6);
    Array_Add(&arr, -5);
    Array_Add(&arr, 7);
    Array_Add(&arr, 12);
    Array_Add(&arr, -11);
    Array_Add(&arr, 15);
    Array_Add(&arr, -99);
    Array_Add(&arr, 77);
    Array_Add(&arr, -7);

    Array_Arrange_Negative_Positive(&arr);
    Array_Display(&arr);

    Array_Free(&arr);
}

void Array_Merge_Sorted_TEST() {
    struct Array arr1 = Array_New(5);
    struct Array arr2 = Array_New(5);
    struct Array arr3;

    Array_Add(&arr1, 1);
    Array_Add(&arr1, 8);
    Array_Add(&arr1, 50);
    Array_Add(&arr1, 95);
    Array_Add(&arr1, 158);

    Array_Add(&arr2, 2);
    Array_Add(&arr2, 50);
    Array_Add(&arr2, 88);
    Array_Add(&arr2, 150);
    Array_Add(&arr2, 154);
    Array_Add(&arr2, 166);
    Array_Add(&arr2, 178);

    arr3 = Array_Merge_Sorted(&arr1, &arr2);

    Array_Display(&arr3);
}

void Array_Union_Sorted_TEST() {
    struct Array arr1 = Array_New(5);
    struct Array arr2 = Array_New(5);
    struct Array arr3;

    Array_Add(&arr1, 1);
    Array_Add(&arr1, 8);
    Array_Add(&arr1, 50);
    Array_Add(&arr1, 95);
    Array_Add(&arr1, 158);

    Array_Add(&arr2, 2);
    Array_Add(&arr2, 50);
    Array_Add(&arr2, 88);
    Array_Add(&arr2, 150);
    Array_Add(&arr2, 154);
    Array_Add(&arr2, 166);
    Array_Add(&arr2, 178);

    arr3 = Array_Union_Sorted(&arr1, &arr2);

    Array_Display(&arr3);
}

void Array_Intersection_Sorted_TEST() {
    struct Array arr1 = Array_New(5);
    struct Array arr2 = Array_New(5);
    struct Array arr3;

    Array_Add(&arr1, 1);
    Array_Add(&arr1, 8);
    Array_Add(&arr1, 50);
    Array_Add(&arr1, 95);
    Array_Add(&arr1, 158);

    Array_Add(&arr2, 2);
    Array_Add(&arr2, 51);
    Array_Add(&arr2, 88);
    Array_Add(&arr2, 150);
    Array_Add(&arr2, 154);
    Array_Add(&arr2, 156);
    Array_Add(&arr2, 158);

    arr3 = Array_Intersection_Sorted(&arr1, &arr2);

    Array_Display(&arr3);
}

void Array_Difference_Sorted_TEST() {
    struct Array arr1 = Array_New(5);
    struct Array arr2 = Array_New(5);
    struct Array arr3;

    Array_Add(&arr1, 1);
    Array_Add(&arr1, 8);
    Array_Add(&arr1, 50);
    Array_Add(&arr1, 95);
    Array_Add(&arr1, 158);

    Array_Add(&arr2, 2);
    Array_Add(&arr2, 51);
    Array_Add(&arr2, 88);
    Array_Add(&arr2, 95);
    Array_Add(&arr2, 154);
    Array_Add(&arr2, 156);
    Array_Add(&arr2, 158);

    arr3 = Array_Difference_Sorted(&arr1, &arr2);

    Array_Display(&arr3);
}