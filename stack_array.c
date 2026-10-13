#include <stdio.h>

#define MAX 6

int box[MAX];
int top = -1;

// PUSH Function
void push(int x) {

    if (top == MAX - 1) {
        printf("STACK IS FULL!\n");
    } 
    else {
        top++;
        box[top] = x;
        printf("%d pushed into the stack.\n", x);
    }
}

// POP Function
void pop() {

    if (top == -1) {
        printf("STACK IS EMPTY! Nothing to pop.\n");
    } 
    else {
        printf("%d popped from the stack.\n", box[top]);
        top--;
    }
}

// DISPLAYING
void display() {

    int i;

    if (top == -1) {
        printf("STACK IS EMPTY!\n");
    } 
    else {
        printf("Stack elements:\n");

        for (i = top; i >= 0; i--) {
            printf("%d\n", box[i]);
        }
    }
}

// TRAVERSAL
void traverse() {

    int i;

    if (top == -1) {
        printf("STACK IS EMPTY! Nothing to traverse.\n");
    } 
    else {
        printf("Traversing stack:\n");

        for (i = 0; i <= top; i++) {
            printf("%d \n", box[i]);
        }

        printf(" \n ");
    }
}

int main() {

    // Push elements
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    // pushing when full
    push(70);

    // Display elements
    display();

    // Traversal
    traverse();

    // Pop elements
    pop();
    pop();

    // Display again...
    display();

    // Pop remaining elements
    pop();
    pop();
    pop();
    pop();

    // Try popping when empty
    pop();

    return 0;
}
