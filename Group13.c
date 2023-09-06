// push operation on a stack

#include <stdio.h>

// initializing a global variable for the maximun size of the stack
#define MAXSIZE 100

// Creating a new data structure to implement a stack using an array
struct Stack
{
    int items[MAXSIZE];
    int top;
};



int main()
{
    // Creating an empty stack
    struct Stack *stack;
    stack->top = -1;

    
    int num_items_to_push;
    printf("Enter number of times to push elements into the stack: ");
    scanf("%i",&num_items_to_push);
    
    // using a loop to push elements into the stack as many times as we want
    
    for(int i = 0; i<num_items_to_push;i++)
    {
        if (stack->top == MAXSIZE - 1)
        {
            printf("Stack Overflow");
            return 1;
        }
        // Asking user for data and reading it in
        int data;
        printf("Enter a number to push into the stack: ");
        scanf("%i",&data);
        
        // adding element into to the stack and increasing the top of the stack
        stack->top = stack->top + 1;
        stack->items[stack->top] = data;
        
        
    }
    
    // printing elements in the stack to see if our push operation was successful
    printf("Stack:\n");
    while (stack->top >-1 )
    {
        printf("%i\n",stack->items[stack->top]);
        stack->top = stack->top - 1;
    }
}
