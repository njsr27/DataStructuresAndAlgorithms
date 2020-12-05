#include "stdlib.h"
#include "../../ADT/Queue/Node.c"

Node *Node_New(int value) {
    Node *a = (Node *) malloc(sizeof(Node *));
    a->value = value;
    a->previous = (void *) 0;
    a->next = (void *) 0;
    return a;
}