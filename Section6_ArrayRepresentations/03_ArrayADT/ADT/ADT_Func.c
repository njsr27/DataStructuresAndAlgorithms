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

void Array_Free(struct Array *arr) {
    free(arr->A);
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
        if (arr->A[i] == element) {
            return i;
        }
    }

    return -1;
}

int Array_Search_Binary(struct Array *arr, int element) {
    int low = 0;
    int high = arr->length - 1;
    int mid;

    while (low <= high) {

        mid = (low + high) / 2;

        if (arr->A[mid] == element) {
            return mid;
        } else if (arr->A[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }

    }

    return -1;
}

int Array_Get(struct Array *arr, int index) {
    if (index > arr->length - 1) {
        printf("== INDEX OUT OF BOUNDS EXCEPTION ==\n");
        return -1;
    } else {
        return arr->A[index];
    }
}

void Array_Set(struct Array *arr, int index, int value) {
    if (index > arr->length - 1) {
        printf("== INDEX OUT OF BOUNDS EXCEPTION ==\n");
    } else {
        arr->A[index] = value;
    }
}

int Array_Max(struct Array *arr) {
    int max;

    if (arr->length > 0) {
        max = arr->A[0];

        for (int i = 1; i < arr->length; ++i) {
            if (arr->A[i] > max) {
                max = arr->A[i];
            }
        }

        return max;
    } else {
        return -1;
    }
}

int Array_Min(struct Array *arr) {
    int min;

    if (arr->length > 0) {
        min = arr->A[0];

        for (int i = 1; i < arr->length; ++i) {
            if (arr->A[i] < min) {
                min = arr->A[i];
            }
        }

        return min;
    } else {
        return -1;
    }
}

int Array_Sum(struct Array *arr) {
    int sum;

    if (arr->length > 0) {
        sum = arr->A[0];

        for (int i = 1; i < arr->length; ++i) {
            sum = sum + arr->A[i];
        }

        return sum;
    } else {
        return -1;
    }
}

double Array_Avg(struct Array *arr) {
    double sum;

    if (arr->length > 0) {
        sum = arr->A[0];

        for (int i = 1; i < arr->length; ++i) {
            sum = sum + arr->A[i];
        }

        return sum / arr->length;
    } else {
        return -1;
    }
}

struct Array Array_Reverse(struct Array *arr) {
    struct Array B = Array_New(arr->size);
    int i;

    for (i = arr->length - 1; i >= 0; i--) {
        Array_Add(&B, arr->A[i]);
    }

    Array_Free(arr);

    return B;
}

void Array_Left_Shift(struct Array *arr) {
    for (int i = 0; i < arr->length - 1; ++i) {
        arr->A[i] = arr->A[i + 1];
    }

    arr->A[arr->length - 1] = 0;
}

void Array_Left_Rotate(struct Array *arr) {
    for (int i = arr->length - 1; i > 0; --i) {
        arr->A[i] = arr->A[i] + arr->A[0];
        arr->A[0] = arr->A[i] - arr->A[0];
        arr->A[i] = arr->A[i] - arr->A[0];
    }
}

void Array_Right_Shift(struct Array *arr) {
    for (int i = arr->length - 1; i > 0; --i) {
        arr->A[i] = arr->A[i - 1];
    }

    arr->A[0] = 0;
}

void Array_Right_Rotate(struct Array *arr) {
    for (int i = 0; i < arr->length - 1; ++i) {
        arr->A[i] = arr->A[i] + arr->A[arr->length - 1];
        arr->A[arr->length - 1] = arr->A[i] - arr->A[arr->length - 1];
        arr->A[i] = arr->A[i] - arr->A[arr->length - 1];
    }
}