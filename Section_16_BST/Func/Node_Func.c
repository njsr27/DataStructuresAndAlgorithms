#include "stdlib.h"
#include "../ADT/Node.c"

Node *Node_New(int value) {
    Node *a = (Node *) malloc(sizeof(Node *));
    a->value = value;
    a->left = (void *) 0;
    a->right = (void *) 0;
    return a;
}

void Node_PreOrder(Node *node) {
    if (node) {
        printf("(%d)", node->value);
        Node_PreOrder(node->left);
        Node_PreOrder(node->right);
    }
    return;
}

void Node_InOrder(Node *node) {
    if (node) {
        Node_InOrder(node->left);
        printf("(%d)", node->value);
        Node_InOrder(node->right);
    }
    return;
}

void Node_PostOrder(Node *node) {
    if (node) {
        Node_PostOrder(node->left);
        Node_PostOrder(node->right);
        printf("(%d)", node->value);
    }
    return;
}