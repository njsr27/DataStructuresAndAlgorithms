#include "stdio.h"
#include "../../Func/Queue/Queue_Func.c"

void Initialization_TEST() {
    printf("===== Initialization_TEST =====\n");

    Queue queue = Queue_New();

    printf("Last element: %p\n", queue.tail);
    printf("First element: %p\n", queue.head);
    printf("Length: %d\n", queue.length);
}

void Enqueue_TEST() {
    printf("===== Enqueue_TEST =====\n");

    Queue queue = Queue_New();

    Queue_Enqueue(&queue, 40);
    Queue_Enqueue(&queue, 25);
    Queue_Enqueue(&queue, 555);
    Queue_Enqueue(&queue, 123);
    Queue_Enqueue(&queue, 77);

    Queue_Display(&queue);
}

void Dequeue_TEST() {
    printf("===== Dequeue_TEST =====\n");

    Queue queue = Queue_New();

    Queue_Enqueue(&queue, 40);
    Queue_Enqueue(&queue, 25);
    Queue_Enqueue(&queue, 555);
    Queue_Enqueue(&queue, 123);
    Queue_Enqueue(&queue, 77);

    Queue_Display(&queue);

    printf("Element received from dequeue %d.\n", Queue_Dequeue(&queue));
    printf("Element received from dequeue %d.\n", Queue_Dequeue(&queue));

    Queue_Display(&queue);
}
