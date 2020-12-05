#include <stdio.h>
#include "../../ADT/Queue/Queue.c"
#include "DoublyNode_Func.c"

Queue Queue_New() {
    Queue q;
    q.head = (void *) 0;
    q.tail = (void *) 0;
    q.length = 0;
    return q;
}

Queue Queue_Display(Queue *queue) {
    printf("=== Elements in Queue ===\n");

    struct Node *actual = queue->tail;

    for (int i = 0; i < queue->length; ++i) {
        printf("| %d |\n", actual->value);
        actual = actual->previous;
    }

    printf("===========================\n");
    printf("Tail of the Queue: %d.\n", queue->tail->value);
    printf("Head of the Queue: %d.\n", queue->head->value);
    printf("===========================\n");
}

void Queue_Enqueue(Queue *queue, int value) {
    Node *element = Node_New(value);
    Node *actual = queue->tail;

    if (queue->length == 0) {
        queue->head = element;
    } else {
        queue->tail->next = element;
        queue->tail->next->previous = actual;
    }

    queue->tail = element;
    queue->length++;
}

int Queue_Dequeue(Queue *queue) {
    int returnVal;

    if (queue->length == 0) {
        printf("Empty queue!.\n");
        return -1;
    } else {
        returnVal = queue->head->value;
        queue->head = queue->head->next;
        queue->head->previous = (void *) 0;
        queue->length--;
        return returnVal;
    }
}

int Queue_IsEmpty(Queue *queue) {
    return queue->length == 0;
}

int Queue_First(Queue *queue) {
    return queue->head->value;
}

int Queue_Last(Queue *queue) {
    return queue->tail->value;
}