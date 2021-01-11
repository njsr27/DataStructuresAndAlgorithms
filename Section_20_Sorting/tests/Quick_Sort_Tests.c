#include "../functions/Sorting.c"

void Standard_Test() {
    printf("=== Standard_Test ===\n");
    int list[] = {4, 92, 42, 3, 55, 12, 23, 9, 0, 77};
    int length = sizeof(list) / sizeof(int);

    List_Sort_Quick(list, 0, length - 1);

    List_Display(list, length);
    printf("\n\n");
}

void Sorted_Test() {
    printf("=== Sorted_Test ===\n");
    int list[] = {0, 3, 4, 9, 12, 23, 42, 55, 77, 92};
    int length = sizeof(list) / sizeof(int);

    List_Sort_Quick(list, 0, length - 1);

    List_Display(list, length);
    printf("\n\n");
}

void Inverted_Test() {
    printf("=== Inverted_Test ===\n");
    int list[] = {92, 77, 55, 42, 23, 12, 9, 4, 3, 0};
    int length = sizeof(list) / sizeof(int);

    List_Sort_Quick(list, 0, length - 1);

    List_Display(list, length);
    printf("\n\n");
}

void Quick_Sort_Test() {
    printf("===== Quick Sort =====\n\n");
    Standard_Test();
    Sorted_Test();
    Inverted_Test();
}
