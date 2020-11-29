#include "stdio.h"
#include "../../ADT/LinkedList/LinkedList.c"
#include "Node_Func.c"

struct LinkedList LinkedList_New() {
    struct LinkedList list;
    list.head = (void *) 0;
    list.tail = (void *) 0;
    list.length = 0;
    return list;
}

void LinkedList_Add(struct LinkedList *list, int val) {
    struct Node *element = Node_New(val);

    if (list->length == 0) {
        list->head = element;
    } else {
        list->tail->next = element;
    }

    list->tail = element;
    list->length++;
}

void LinkedList_Display(struct LinkedList *list) {
    printf("=== Elements in LinkedList ===\n");

    struct Node *actual = list->head;

    for (int i = 1; i <= list->length; ++i) {
        printf("%d ", actual->value);
        actual = actual->next;
    }

    printf("\n");
}

int LinkedList_Sum(struct LinkedList *list) {
    struct Node *actual;
    int total;

    if (list->length > 0) {
        actual = list->head;
        total = actual->value;
        actual = actual->next;

        for (int i = 2; i <= list->length; ++i) {
            total += actual->value;
            actual = actual->next;
        }

        return total;
    } else {
        return -1;
    }
}

int LinkedList_Max(struct LinkedList *list) {
    struct Node *actual;
    int max;

    if (list->length > 0) {
        actual = list->head;
        max = actual->value;
        actual = actual->next;

        for (int i = 2; i <= list->length; ++i) {
            if (actual->value > max) {
                max = actual->value;
            }
            actual = actual->next;
        }

        return max;
    } else {
        return -1;
    }
}

int LinkedList_Min(struct LinkedList *list) {
    struct Node *actual;
    int min;

    if (list->length > 0) {
        actual = list->head;
        min = actual->value;
        actual = actual->next;

        for (int i = 2; i <= list->length; ++i) {
            if (actual->value < min) {
                min = actual->value;
            }
            actual = actual->next;
        }

        return min;
    } else {
        return -1;
    }
}

struct Node *LinkedList_Search(struct LinkedList *list, int val) {
    struct Node *actual;

    if (list->length > 0) {
        actual = list->head;

        for (int i = 1; i <= list->length; ++i) {
            if (actual->value == val) {
                return actual;
            }
            actual = actual->next;
        }

        return (void *) 0;
    } else {
        return (void *) 0;
    }
}

int LinkedList_Insert(struct LinkedList *list, int val, int index) {
    struct Node *actual;
    struct Node *element = Node_New(val);

    if (index <= list->length) {
        if (index == 0) {
            element->next = list->head;
            list->head = element;
            if (list->length == 0) {
                list->tail = element;
            }
            list->length++;
            return 1;
        } else if (index == list->length) {
            list->tail->next = element;
            list->tail = element;
            list->length++;
            return 1;
        } else {
            actual = list->head;
            for (int i = 1; i <= index; ++i) {
                if (i == index) {
                    element->next = actual->next;
                    actual->next = element;
                    list->length++;
                    return 1;
                }
                actual = actual->next;
            }
            return 0;
        }
    } else {
        return -1;
    }
}

//We imply ASC order
void LinkedList_Insert_Sorted(struct LinkedList *list, int val) {
    struct Node *previous = list->head;
    struct Node *actual = list->head;
    struct Node *element = Node_New(val);

    if (list->length == 0) {
        list->head = element;
        list->tail = element;
        list->length++;
        return;
    }

    for (int i = 1; i <= list->length; ++i) {
        if (val <= actual->value) {
            element->next = actual;
            if (i == 1) {
                list->head = element;
            } else {
                previous->next = element;
            }
            list->length++;
            return;
        }
        previous = actual;
        actual = actual->next;
    }

    list->tail->next = element;
    list->tail = element;
    list->length++;
    return;
}

int LinkedList_Delete(struct LinkedList *list, int index) {
    struct Node *previous = list->head;
    struct Node *actual = list->head->next;

    if (index > list->length - 1) {
        printf("Index out of bounds.\n");
        return -1;
    }

    if (index == 0) {
        list->head = actual;
        free(previous);
        list->length--;
        return 1;
    } else {
        for (int i = 1; i < list->length; ++i) {
            if (i == index) {
                if (index == list->length - 1) {
                    previous->next = (void *) 0;
                    list->tail = previous;
                } else {
                    previous->next = actual->next;
                }

                free(actual);
                list->length--;
                return 1;
            }
            previous = actual;
            actual = actual->next;
        }
    }
}

//We imply ASC order
int LinkedList_IsSorted(struct LinkedList *list) {
    struct Node *actual = list->head;
    struct Node *next = list->head->next;

    for (int i = 1; i < list->length; ++i) {
        if (next->value < actual->value) {
            return 0;
        }
        actual = next;
        next = next->next;
    }

    return 1;
}

//We imply ASC order
void LinkedList_RemoveDup(struct LinkedList *list) {
    struct Node *act = list->head;
    struct Node *nxt = list->head->next;
    int total = list->length;

    for (int i = 1; i < total; ++i) {
        if (act->value == nxt->value) {
            act->next = nxt->next;
            free(nxt);
            nxt = act->next;
            list->length--;
        } else {
            act = nxt;
            nxt = nxt->next;
        }
    }

    return;
}

void LinkedList_Reverse(struct LinkedList *list) {
    /*int aux[list->length];
    struct Node *stub = list->head;

    for (int i = 0; i < list->length; ++i) {
        aux[i] = stub->value;
        stub = stub->next;
    }

    stub = list->head;

    for (int i = list->length - 1; i >= 0; --i) {
        stub->value = aux[i];
        stub = stub->next;
    }

    free(stub);*/

    struct Node *p = list->head;
    struct Node *q;
    struct Node *r;

    list->tail = p;

    for (int i = 0; i < list->length; ++i) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    list->head = q;
}

void LinkedList_Concat(struct LinkedList *list1, struct LinkedList *list2) {
    list1->tail->next = list2->head;
    list1->length += list1->length;
}

//We imply ASC order
struct LinkedList LinkedList_Merge(struct LinkedList *list1, struct LinkedList *list2) {
    struct LinkedList final = LinkedList_New();
    struct Node *stubFinal;
    struct Node *stubI = list1->head;
    struct Node *stubJ = list2->head;
    int i = 0;
    int j = 0;

    if (stubI->value <= stubJ->value) {
        final.head = stubI;
        i++;
        stubI = stubI->next;
    } else {
        final.head = stubJ;
        j++;
        stubJ = stubJ->next;
    }

    stubFinal = final.head;
    final.length++;

    while (i < list1->length && j < list1->length) {
        if (stubI->value <= stubJ->value) {
            stubFinal->next = stubI;
            i++;
            stubI = stubI->next;
        } else {
            stubFinal->next = stubJ;
            j++;
            stubJ = stubJ->next;
        }
        stubFinal = stubFinal->next;
        final.length++;
    }

    if (i == list1->length && j != list2->length) {
        while (j < list2->length) {
            stubFinal->next = stubJ;
            stubFinal = stubFinal->next;
            j++;
            stubJ = stubJ->next;
            final.length++;
        }
    } else if (i != list1->length && j == list2->length) {
        while (i < list1->length) {
            stubFinal->next = stubI;
            stubFinal = stubFinal->next;
            i++;
            stubI = stubI->next;
            final.length++;
        }
    }

    final.tail = stubFinal;
    return final;
}

