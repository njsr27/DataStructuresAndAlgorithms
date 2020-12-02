#include "stdio.h"
#include "../../Func/Stack/Stack_Func.c"

void Initialization_TEST() {
    printf("===== Initialization_TEST =====\n");

    Stack stack = Stack_New();

    printf("Last element: %p\n", stack.tail);
    printf("Length: %d\n", stack.length);
}

void Push_TEST() {
    printf("===== Push_TEST =====\n");

    Stack stack = Stack_New();

    Stack_Push(&stack, 5);
    Stack_Push(&stack, 35);
    Stack_Push(&stack, 88);
    Stack_Push(&stack, 77);
    Stack_Push(&stack, 345);

    Stack_Display(&stack);
}

void Pop_TEST() {
    printf("===== Pop_TEST =====\n");

    Stack stack = Stack_New();

    Stack_Push(&stack, 5);
    Stack_Push(&stack, 35);
    Stack_Push(&stack, 88);
    Stack_Push(&stack, 77);
    Stack_Push(&stack, 345);

    Stack_Pop(&stack);

    Stack_Display(&stack);
}
