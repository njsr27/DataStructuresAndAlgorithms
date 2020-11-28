#include "../../ADT/DoublyLinkedList/DLinkedList.c"

struct DLinkedList DLinkedList_New() {
    struct DLinkedList list;
    list.head = (void *) 0;
    list.tail = (void *) 0;
    list.length = 0;
    return list;
}
