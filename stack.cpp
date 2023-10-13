#include <bits/stdc++.h>
#define MAX 10
using namespace std;

struct Stack {
    int top;
    int data[MAX];
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

void push(struct Stack *stack, int val) {
    if (stack->top < MAX - 1) {
        stack->data[++stack->top] = val;
        cout << "Element added: " << val << endl;
    } else {
        cout << "Stack is full. Cannot push " << val << endl;
    }
}

int pop(struct Stack *stack) {
    if (stack->top >= 0) {
        int val = stack->data[stack->top];
        stack->top--;
        return val;
    } else {
        cout << "Stack is empty. Cannot pop." << endl;
        return -1; // Return a sentinel value to indicate an empty stack
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    int poppedValue = pop(&stack);
    if (poppedValue != -1) {
        cout << "Popped element: " << poppedValue << endl;
    }

    return 0;
}
