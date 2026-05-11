#include <stdio.h>
#include <stdlib.h>

#define MAX 5   // Maximum size of stack

int stack[MAX];
int top = -1;

// Push operation
void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push element.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop element.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

// Peek operation
void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

// Display stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}




