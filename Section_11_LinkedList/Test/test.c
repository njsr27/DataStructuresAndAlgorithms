#include "stdio.h"
#include "../Func/Node_Func.c"
#include "../Func/LinkedList_Func.c"

void Initialization_TEST() {
    printf("===== Initialization_TEST =====\n");

    struct LinkedList list = LinkedList_New();

    printf("First element: %p\n", list.head);
    printf("Last element: %p\n", list.tail);
    printf("Length: %d\n", list.length);
}

void Add_TEST() {
    printf("===== Add_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 45);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 18);
    LinkedList_Add(&list, 19);
    LinkedList_Add(&list, 25);
    LinkedList_Add(&list, 22);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 23);
    LinkedList_Add(&list, 555);
    LinkedList_Add(&list, 145);
    LinkedList_Add(&list, 123);

    LinkedList_Display(&list);
    printf("Length: %d\n", list.length);
}

void Sum_TEST() {
    printf("===== Add_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 1);

    printf("The sum of all the elements is: %d\n", LinkedList_Sum(&list));
}

void Min_Max_TEST() {
    printf("===== Add_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 45);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 18);
    LinkedList_Add(&list, 19);
    LinkedList_Add(&list, 25);
    LinkedList_Add(&list, 22);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 23);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 145);
    LinkedList_Add(&list, 123);

    printf("The minimum number of all the elements is: %d\n", LinkedList_Min(&list));
    printf("The maximum number of all the elements is: %d\n", LinkedList_Max(&list));
}

void Search_TEST() {
    printf("===== Search_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 45);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 18);
    LinkedList_Add(&list, 19);
    LinkedList_Add(&list, 25);
    LinkedList_Add(&list, 22);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 23);
    LinkedList_Add(&list, 1);
    LinkedList_Add(&list, 145);
    LinkedList_Add(&list, 123);

    if (LinkedList_Search(&list, 5)) {
        printf("Element found!\n");
    } else {
        printf("Element not found!\n");
    }

}

void Insert_TEST() {
    printf("===== Insert_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 45);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 18);
    LinkedList_Add(&list, 19);
    LinkedList_Add(&list, 25);
    LinkedList_Add(&list, 22);
    LinkedList_Add(&list, 12);
    LinkedList_Add(&list, 23);
    LinkedList_Add(&list, 555);
    LinkedList_Add(&list, 145);
    LinkedList_Add(&list, 123);

    LinkedList_Insert(&list, 99, 0);

    /*LinkedList_Insert(&list, 5, 0);
    LinkedList_Insert(&list, 45, 1);
    LinkedList_Insert(&list, 12, 2);
    LinkedList_Insert(&list, 18, 3);
    LinkedList_Insert(&list, 19, 4);*/

    LinkedList_Display(&list);
    printf("Length: %d\n", list.length);
}

void Insert_Sorted_TEST() {
    printf("===== Insert_Sorted_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 13);
    LinkedList_Add(&list, 55);
    LinkedList_Add(&list, 88);
    LinkedList_Add(&list, 156);

    LinkedList_Insert_Sorted(&list, 77);

    /*LinkedList_Insert_Sorted(&list, 5);
    LinkedList_Insert_Sorted(&list, 45);
    LinkedList_Insert_Sorted(&list, 12);
    LinkedList_Insert_Sorted(&list, 85);
    LinkedList_Insert_Sorted(&list, 19);*/

    LinkedList_Display(&list);
    printf("Length: %d\n", list.length);
}

void Delete_TEST() {
    printf("===== Delete_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 13);
    LinkedList_Add(&list, 55);
    LinkedList_Add(&list, 88);
    LinkedList_Add(&list, 156);

    LinkedList_Delete(&list, 0);

    /*LinkedList_Insert_Sorted(&list, 5);
    LinkedList_Insert_Sorted(&list, 45);
    LinkedList_Insert_Sorted(&list, 12);
    LinkedList_Insert_Sorted(&list, 85);
    LinkedList_Insert_Sorted(&list, 19);*/

    LinkedList_Display(&list);
    printf("Length: %d\n", list.length);
}

void IsSorted_TEST() {
    printf("===== IsSorted_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 13);
    LinkedList_Add(&list, 77);
    LinkedList_Add(&list, 88);
    LinkedList_Add(&list, 89);

    if (LinkedList_IsSorted(&list))
        printf("Is sorted!");
    else
        printf("Is not sorted!");
}

void RemoveDup_TEST() {
    printf("===== RemoveDup_TEST =====\n");

    struct LinkedList list = LinkedList_New();
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 5);
    LinkedList_Add(&list, 55);
    LinkedList_Add(&list, 88);
    LinkedList_Add(&list, 156);
    LinkedList_Add(&list, 222);
    LinkedList_Add(&list, 251);
    LinkedList_Add(&list, 251);
    LinkedList_Add(&list, 288);
    LinkedList_Add(&list, 288);

    LinkedList_RemoveDup(&list);

    LinkedList_Display(&list);
    printf("Length: %d\n", list.length);
}