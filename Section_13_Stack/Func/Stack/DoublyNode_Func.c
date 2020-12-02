#include "stdlib.h"
#include "../../ADT/Stack/Node.c"

struct Node *Node_New(int value) {
    struct Node *a = (struct Node *) malloc(sizeof(struct Node *));
    a->value = value;
    a->previous = (void *) 0;
    a->next = (void *) 0;
    return a;
}