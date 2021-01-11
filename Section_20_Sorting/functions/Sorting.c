#include <stdio.h>
#include "Utils.c"

void List_Sort_Bubble(int list[], int length) {
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

void List_Sort_Insertion(int list[], int length) {
    int comp = 0;
    int swap = 0;

    for (int i = 1; i < length; ++i) { //"Pass" handler
        for (int j = i - 1; j >= 0; --j) {
            comp++;
            if (list[j] >= list[j + 1]) { //Natural order
                List_Swap(list, j, j + 1);
                swap++;
            } else {
                break;
            }
        }
    }

    printf("\nNumber of comparisons %d\n", comp);
    printf("Number of swaps %d\n", swap);
}

void List_Sort_Selection(int list[], int length) {
    int comp = 0;
    int swap = 0;
    int minIndex;

    for (int i = 0; i < length - 1; ++i) { //"Pass" handler
        comp += (length - 1) - i;
        minIndex = List_GetMinIndex(list, i, length - 1);
        if (i != minIndex) {
            swap++;
            List_Swap(
                    list,
                    minIndex,
                    i
            );
        }
    }

    printf("\nNumber of comparisons %d\n", comp);
    printf("Number of swaps %d\n", swap);
}

void List_Sort_Quick(int list[], int l, int h) {
    int i, j, pivot, temp;

    if (l < h) {
        pivot = l;
        i = l;
        j = h;

        while (i < j) {
            while (list[i] <= list[pivot] && i < h)
                i++;
            while (list[j] > list[pivot])
                j--;
            if (i < j) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }

        temp = list[pivot];
        list[pivot] = list[j];
        list[j] = temp;
        List_Sort_Quick(list, l, j - 1);
        List_Sort_Quick(list, j + 1, h);
    }
}