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
