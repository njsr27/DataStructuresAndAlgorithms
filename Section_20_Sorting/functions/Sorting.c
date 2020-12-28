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

void List_Sort_Bubble(int *list, int length) {
    int comp = 0;
    int swap = 0;
    int compFlag = 0;

    for (int i = 0; i < length - 1; ++i) { //"Pass" handler
        for (int j = 0; j < length - 1 - i; ++j) {
            comp++;
            if (list[j] > list[j + 1]) { //Natural order
                List_Swap(list, j, j + 1);
                swap++;
                compFlag = 1;
            }
        }
        if (!compFlag) { //Flag created to prevent extra comparisons in an ordered array
            break;
        }
    }

    printf("\nNumber of comparisons %d\n", comp);
    printf("Number of swaps %d\n", swap);
}