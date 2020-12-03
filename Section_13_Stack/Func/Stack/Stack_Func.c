#include "../../ADT/Stack/Stack.c"
#include "DoublyNode_Func.c"

Stack Stack_New() {
    Stack stack;;
    stack.tail = (void *) 0;
    stack.length = 0;
    return stack;
}

Stack Stack_Display(Stack *stack) {
    printf("=== Elements in Stack ===\n");

    struct Node *actual = stack->tail;

    for (int i = 0; i < stack->length; ++i) {
        printf("| %d |\n", actual->value);
        actual = actual->next;
    }

    printf("===========================\n");
    printf("Tail of the Stack: %d.\n", stack->tail->value);
    printf("===========================\n");
}

void Stack_Push(Stack *stack, int value) {
    struct Node *element = Node_New(value);

    if (stack->length != 0) {
        element->next = stack->tail;
        stack->tail->previous = element;
    }

    stack->tail = element;
    stack->length++;
    return;
}

int Stack_Pop(Stack *stack) {
    int returnValue = -1;

    if (stack->length == 0) {
        printf("Stack empty.\n");
    } else {
        returnValue = stack->tail->value;
        stack->tail = stack->tail->next;
        stack->tail->previous = (void *) 0;
        stack->length--;
    }

    return returnValue;
}

int Stack_Peek(Stack *stack, int position) {
    struct Node *actual = stack->tail;

    if (position == 0 || position > stack->length) {
        printf("Index ouf of bounds.\n");
        return -1;
    }

    for (int i = 1; i <= stack->length; ++i) {
        if (position == i) {
            return actual->value;
        }

        actual = actual->next;
    }
}

int Stack_StackPop(Stack *stack) {
    return stack->tail->value;
}

int Stack_IsEmpty(Stack *stack) {
    return stack->length == 0;
}

int Stack_IsFull(Stack *stack) {
    struct Node *a = Node_New(0);
    if (a == NULL) {
        free(a);
        return 1;
    } else {
        free(a);
        return 0;
    }
}