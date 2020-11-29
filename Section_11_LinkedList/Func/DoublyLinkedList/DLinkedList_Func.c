#include "../../ADT/DoublyLinkedList/DLinkedList.c"

struct DLinkedList DLinkedList_New() {
    struct DLinkedList list;
    list.head = (void *) 0;
    list.tail = (void *) 0;
    list.length = 0;
    return list;
}

void DLinkedList_Display(struct DLinkedList *list) {
    printf("=== Elements in Doubly LinkedList ===\n");

    struct DNode *actual = list->head;

    for (int i = 0; i < list->length; ++i) {
        printf("%d ", actual->value);
        actual = actual->next;
    }

    printf("\n");
}

void DLinkedList_Display_Inverse(struct DLinkedList *list) {
    printf("=== Elements in inverted Doubly LinkedList ===\n");

    struct DNode *actual = list->tail;

    for (int i = 0; i < list->length; ++i) {
        printf("%d ", actual->value);
        actual = actual->previous;
    }

    printf("\n");
}

int DLinkedList_Insert(struct DLinkedList *list, int index, int value) {
    struct DNode *element;
    struct DNode *stub;

    if (index > list->length) {
        printf("Index %d out of bounds.\n", index);
        return 0;
    } else {
        element = DNode_New(value);
        if (index == 0) {
            if (list->length == 0) {
                list->tail = element;
            } else {
                element->next = list->head;
                list->head->previous = element;
            }
            list->head = element;
        } else if (index == list->length) {
            element->previous = list->tail;
            list->tail->next = element;
            list->tail = element;
        } else {
            stub = list->head->next;
            for (int i = 1; i < list->length; ++i) {
                if (i == index) {
                    stub->previous->next = element;
                    element->previous = stub->previous;
                    element->next = stub;
                    stub->previous = element;
                    break;
                }
                stub = stub->next;
            }
        }
    }

    list->length++;
    return 1;
}