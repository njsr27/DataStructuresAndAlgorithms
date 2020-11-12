#include "stdio.h"
#include "../ADT/LinkedList.c"

struct LinkedList new() {
    struct LinkedList list;
    list.head = (void*)0;
    list.tail = (void*)0;
    list.length = 0;
    return list;
}

void LinkedList_Add(struct LinkedList *list, struct Node *element) {
    if(list->length == 0){
        list->head = element;
    } else {
        list->tail->next = element;
    }

    list->tail = element;
    list->length++;
}

void LinkedList_Display(struct LinkedList * list){
    printf("=== Elements in LinkedList ===\n");

    struct Node* actual = list->head;

    for (int i = 1; i <= list->length; ++i) {
        printf("%d ", actual->value);
        actual = actual->next;
    }

    printf("\n");
}