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

void Peek_TEST() {
    printf("===== Peek_TEST =====\n");

    Stack stack = Stack_New();
    int index = 5;

    Stack_Push(&stack, 5);
    Stack_Push(&stack, 35);
    Stack_Push(&stack, 88);
    Stack_Push(&stack, 77);
    Stack_Push(&stack, 345);

    Stack_Display(&stack);

    printf("Element in index %d is %d.\n", index, Stack_Peek(&stack, index));
}

void StackTop_TEST() {
    printf("===== StackTop_TEST =====\n");

    Stack stack = Stack_New();

    Stack_Push(&stack, 5);
    Stack_Push(&stack, 35);
    Stack_Push(&stack, 88);
    Stack_Push(&stack, 77);
    Stack_Push(&stack, 345);

    Stack_Display(&stack);

    printf("The element in the first position is %d.\n", Stack_StackPop(&stack));
}