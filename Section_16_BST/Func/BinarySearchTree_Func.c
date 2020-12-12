#include "../ADT/BinarySearchTree.c"
#include "../Func/Node_Func.c"

BST BST_New() {
    BST bst;
    bst.root = (void *) 0;
    bst.length = 0;
    return bst;
}

void BST_Insert(BST *tree, int element) {
    Node *actual;

    if (tree->length == 0) {
        tree->root = Node_New(element);
    } else {
        actual = tree->root;
        while (1) {
            if (element < actual->value) {
                if (actual->left) {
                    actual = actual->left;
                    continue;
                } else {
                    actual->left = Node_New(element);
                    break;
                }
            } else if (element > actual->value) {
                if (actual->right) {
                    actual = actual->right;
                    continue;
                } else {
                    actual->right = Node_New(element);
                    break;
                }
            } else {
                printf("Element %d is duplicated, it will be discarded.\n", element);
                return;
            }
        }
    }

    tree->length++;
    return;
}

int BST_Find(BST *tree, int element) {
    Node *actual;

    if (tree->length == 0) {
        printf("Tree empty!\n");
        return 0;
    } else {
        actual = tree->root;
        while (1) {
            if (element < actual->value) {
                if (actual->left) {
                    actual = actual->left;
                    continue;
                } else {
                    return 0;
                }
            } else if (element > actual->value) {
                if (actual->right) {
                    actual = actual->right;
                    continue;
                } else {
                    return 0;
                }
            } else {
                return 1;
            }
        }
    }
}

int BST_Count(BST *bst) {
    return bst->length;
}

void BST_PreOrder(BST *bst) {
    printf("=== Pre order ===\n");
    Node_PreOrder(bst->root);
    printf("\n");
}

void BST_InOrder(BST *bst) {
    printf("=== In order ===\n");
    Node_InOrder(bst->root);
    printf("\n");
}

void BST_PostOrder(BST *bst) {
    printf("=== Post order ===\n");
    Node_PostOrder(bst->root);
    printf("\n");
}

void BST_Display(BST *bst) {
    printf("Root element: %d\n", bst->root->value);
    printf("Number of nodes: %d\n", bst->length);

    BST_PreOrder(bst);
    BST_InOrder(bst);
    BST_PostOrder(bst);
}
