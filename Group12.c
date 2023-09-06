#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

//Function to check if the stack is empty
bool isEmpty() {
    return top == -1;
}
bool isFull(){
    return top == MAX_SIZE -1;
}

void push(int item) {
    if(isFull()){
        printf("Stack Overflow! Cannot push element.\n");
    }else{
        top++;
        stack[top]=item;
        printf("Pushed %d into the stack.\n",item);
    }
}

    int pop() {
        if (isEmpty()){
            printf("Stack Underflow! Cannot pop element.\n");
            return -1; //Return an error value (you can choose a different approach)
        } else{
            int item = stack [top];
            top--;
            return item;
        }
}

int main() {
        push(10);
        push(20);
        push(30);

        printf("Popped %d from the stack.\n", pop());
        printf("Popped %d from the stack.\n", pop());
        printf("Popped %d from the stack.\n", pop());

    return 0;
}
