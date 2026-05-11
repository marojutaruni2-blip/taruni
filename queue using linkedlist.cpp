#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

// Enqueue operation (Insert)
void enqueue() {
    int value;
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
    } else {
        printf("Enter value: ");
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        printf("%d inserted into queue.\n", value);
    }
}

// Dequeue operation (Delete)
void dequeue() {
    struct Node *temp;

    if (front == NULL) {
        printf("Queue Underflow! Queue is empty.\n");
    } else {
        temp = front;
        printf("Deleted element: %d\n", front->data);
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        free(temp);
    }
}

// Peek operation
void peek() {
    if (front == NULL) {
        printf("Queue is empty.\n");
    } else {
        printf("Front element: %d\n", front->data);
    }
}

// Display operation
void display() {
    struct Node *temp = front;

    if (front == NULL) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements:\n");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n--- QUEUE OPERATIONS (Linked List) ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
