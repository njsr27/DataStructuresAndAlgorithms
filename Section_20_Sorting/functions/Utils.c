#include <stdio.h>

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