#include "stdio.h"
#include "../Func/DoublyLinkedList/DNode_Func.c"
#include "../Func/DoublyLinkedList/DLinkedList_Func.c"

void Initialization_TEST() {
    printf("===== Initialization_TEST =====\n");

    struct DLinkedList list = DLinkedList_New();

    printf("First element: %p\n", list.head);
    printf("Last element: %p\n", list.tail);
    printf("Length: %d\n", list.length);
}

void Insert_TEST() {
    printf("===== Insert_TEST =====\n");

    struct DLinkedList list = DLinkedList_New();
    DLinkedList_Insert(&list, 0, 10);
    DLinkedList_Insert(&list, 1, 15);
    DLinkedList_Insert(&list, 2, 88);
    DLinkedList_Insert(&list, 3, 109);
    DLinkedList_Insert(&list, 4, 50);

    DLinkedList_Insert(&list, 2, 555);
    DLinkedList_Insert(&list, 6, 999);
    DLinkedList_Insert(&list, 0, 111);

    DLinkedList_Display(&list);
    DLinkedList_Display_Inverse(&list);
    printf("Length: %d\n", list.length);
}

void Delete_TEST() {
    printf("===== Delete_TEST =====\n");

    struct DLinkedList list = DLinkedList_New();
    DLinkedList_Insert(&list, 0, 10);
    DLinkedList_Insert(&list, 1, 15);
    DLinkedList_Insert(&list, 2, 88);
    DLinkedList_Insert(&list, 3, 109);
    DLinkedList_Insert(&list, 4, 50);

    DLinkedList_Display(&list);
    printf("Length: %d\n", list.length);

    printf("----------------\n");
    //DLinkedList_Delete(&list, 0);
    DLinkedList_Delete(&list, 2);
    //DLinkedList_Delete(&list, 5);

    DLinkedList_Display(&list);
    DLinkedList_Display_Inverse(&list);
    printf("Length: %d\n", list.length);
}
