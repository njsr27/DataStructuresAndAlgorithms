#include "stdlib.h"
#include "../../ADT/DoublyLinkedList/DNode.c"

struct DNode *Node_New(int value) {
    struct DNode *a = (struct DNode *) malloc(sizeof(struct DNode *));
    a->value = value;
    a->previous = (void *) 0;
    a->next = (void *) 0;
    return a;
}