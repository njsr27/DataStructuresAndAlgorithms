#include <stdio.h>
#include "stdlib.h"

void List_Display(int *list, int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", list[i]);
    }
}

void List_Swap(int *list, int j, int i) {
    list[j] = list[j] + list[i];
    list[i] = list[j] - list[i];
    list[j] = list[j] - list[i];
}

int List_GetMinIndex(int *list, int j, int i) {
    int minIndex = j;
    int minVal = list[j];

    for (int k = j + 1; k <= i; ++k) {
        if (list[k] < minVal) {
            minIndex = k;
            minVal = list[k];
        }
    }

    return minIndex;
}

void List_Merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}