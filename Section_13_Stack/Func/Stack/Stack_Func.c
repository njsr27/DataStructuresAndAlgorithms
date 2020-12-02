#include "../../ADT/Stack/Stack.c"
#include "DoublyNode_Func.c"

Stack Stack_New(){
    Stack stack;;
    stack.tail = (void *) 0;
    stack.length = 0;
    return stack;
}

Stack Stack_Display(Stack* stack) {
    printf("=== Elements in Stack ===\n");

    struct Node *actual = stack->tail;

    for (int i = 0; i < stack->length; ++i) {
        printf("| %d |\n", actual->value);
        actual = actual->next;
    }

    printf("====\n");
    printf("Tail of the Stack: %d.\n", stack->tail->value);
    printf("====\n");
}

void Stack_Push(Stack* stack, int value) {
    struct Node *element = Node_New(value);

    if(stack->length != 0){
        element->next = stack->tail;
        stack->tail->previous = element;
    }

    stack->tail = element;
    stack->length++;
    return;
}

void Stack_Pop(Stack* stack){
    stack->tail = stack->tail->next;
    stack->tail->previous = (void *)0;
    stack->length--;
}