#include "stdlib.h"
#include "../ADT/Node.c"

struct Node* Node_New(int value) {
    struct Node *node = (struct Node*) malloc(sizeof(struct Node*));
    node->value = value;
    node->next = (void*)0;
    return node;
}