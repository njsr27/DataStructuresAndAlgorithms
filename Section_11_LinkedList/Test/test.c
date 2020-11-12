#include "stdio.h"
#include "../Func/Node_Func.c"
#include "../Func/LinkedList_Func.c"

void Initialization_TEST() {
    printf("===== Initialization_TEST =====\n");

    struct LinkedList list = new();

    printf("First element: %p\n", list.head);
    printf("Last element: %p\n", list.tail);
    printf("Length: %d\n", list.length);
}

void Add_TEST() {
    printf("===== Add_TEST =====\n");

    struct LinkedList list = new();
    LinkedList_Add(&list, Node_New(5));
    LinkedList_Add(&list, Node_New(45));
    LinkedList_Add(&list, Node_New(12));
    LinkedList_Add(&list, Node_New(18));
    LinkedList_Add(&list, Node_New(19));
    LinkedList_Add(&list, Node_New(25));
    LinkedList_Add(&list, Node_New(22));
    LinkedList_Add(&list, Node_New(12));
    LinkedList_Add(&list, Node_New(23));
    LinkedList_Add(&list, Node_New(555));
    LinkedList_Add(&list, Node_New(145));
    LinkedList_Add(&list, Node_New(123));

    LinkedList_Display(&list);
    printf("Length: %d\n", list.length);
}