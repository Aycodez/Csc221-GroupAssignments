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
    stack ->top = -1;
    
    // number of times we want to pop an element from the stack
    int num_items_to_pop = 2;
    
    // using a loop to push some elements into the stack 
    for(int i = 0; i < 5; i++)
    {
        int data;
        printf("Enter element to add into the stack: ");
        scanf("%i",&data);
        stack->top = stack->top + 1;
        stack->items[stack->top]  = data;
    }

    // using a loop to pop(remove) elements in the stack from the top
    for (int j = 0; j < num_items_to_pop;j ++)
    {
        if (stack->top == -1)
        {
            printf("Stack Underflow");
            return 1;
        }
        printf("%i popped from the stack \n",stack->items[stack->top]);        
        stack->items[stack->top] = NULL;
        stack->top = stack->top - 1;
    }
    
    // printing elements in the stack to see if our pop operation was successful
    printf("Stack:\n");
    while (stack->top >-1 )
    {
        printf("%i\n",stack->items[stack->top]);
        stack->top = stack->top - 1;
    }
}
