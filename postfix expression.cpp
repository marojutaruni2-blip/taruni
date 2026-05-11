#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
    }
}

// Pop operation
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    } else {
        return stack[top--];
    }
}

// Function to evaluate postfix expression
int evaluatePostfix(char *exp) {
    int i, op1, op2, result;

    for (i = 0; exp[i] != '\0'; i++) {

        // If operand, push to stack
        if (isdigit(exp[i])) {
            push(exp[i] - '0');  // convert char to int
        }
        else {
            // operator found, pop two operands
            op2 = pop();
            op1 = pop();

            switch (exp[i]) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
                case '%': result = op1 % op2; break;
                default:
                    printf("Invalid operator\n");
                    exit(1);
            }

            push(result);
        }
    }

    return pop(); // final result
}

// Main function
int main() {
    char exp[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    int result = evaluatePostfix(exp);

    printf("Result = %d\n", result);

    return 0;
}
