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

void Find_TEST() {
    printf("===== Delete_TEST =====\n");

    BST bst = BST_New();

    BST_Insert(&bst, 5);
    BST_Insert(&bst, 4);
    BST_Insert(&bst, 66);
    BST_Insert(&bst, 78);
    BST_Insert(&bst, 70);
    BST_Insert(&bst, 80);
    BST_Insert(&bst, 34);
    BST_Insert(&bst, 11);

    if (BST_Find(&bst, 99)) {
        printf("Element found!\n");
    } else {
        printf("Element not found!\n");
    }
}