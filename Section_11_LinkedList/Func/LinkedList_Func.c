#include "stdio.h"
#include "../ADT/LinkedList.c"

struct LinkedList LinkedList_New() {
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

int LinkedList_Sum(struct LinkedList * list){
    struct Node* actual;
    int total ;

    if(list->length > 0){
        actual = list->head;
        total = actual->value;
        actual = actual->next;

        for (int i = 2; i <= list->length; ++i) {
            total+=actual->value;
            actual = actual->next;
        }

        return total;
    } else {
        return -1;
    }
}

int LinkedList_Max(struct LinkedList * list){
    struct Node* actual;
    int max;

    if(list->length > 0){
        actual = list->head;
        max = actual->value;
        actual = actual->next;

        for (int i = 2; i <= list->length; ++i) {
            if(actual->value > max){
                max = actual->value;
            }
            actual = actual->next;
        }

        return max;
    } else {
        return -1;
    }
}

int LinkedList_Min(struct LinkedList * list){
    struct Node* actual;
    int min;

    if(list->length > 0){
        actual = list->head;
        min = actual->value;
        actual = actual->next;

        for (int i = 2; i <= list->length; ++i) {
            if(actual->value < min){
                min = actual->value;
            }
            actual = actual->next;
        }

        return min;
    } else {
        return -1;
    }
}