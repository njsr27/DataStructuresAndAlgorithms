#include "stdio.h"
#include "../Func/BinarySearchTree_Func.c"

void Initialization_TEST() {
    printf("===== Initialization_TEST =====\n");

    BST bst = BST_New();

    printf("Root element: %p\n", bst.root);
    printf("Number of nodes: %d\n", bst.length);
}

void Insert_TEST() {
    printf("===== Insert_TEST =====\n");

    BST bst = BST_New();

    BST_Insert(&bst, 5);
    BST_Insert(&bst, 4);
    BST_Insert(&bst, 66);
    BST_Insert(&bst, 34);
    BST_Insert(&bst, 11);
    BST_Insert(&bst, 4);

    BST_Display(&bst);
}