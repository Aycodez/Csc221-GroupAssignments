// Creating a singly linked list

// including libraries to use for the operations
#include <stdio.h>
#include <stdlib.h>

// Creating a new data structure called Node
struct Node
{
    int data;
    struct Node *next;

};

int main()
{
    // Creating an empty list
    struct Node *head = NULL;

    // Creating three Nodes that we want to link together
    struct Node *first;
    struct Node *second;
    struct Node *third;

    // Pointing the headprt(empty list) to the first node
    head = first;
    
    
    // Allocating space to each node
    first =  malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    
    // Inserting numbers into the data part of the nodes
    first ->data = 11;
    second ->data = 23;
    third ->data = 30;
    
    // Linking the nodes to each other
    first ->next = second;
    second ->next = third;
    third ->next = NULL;
    
    // Freeing up the space we allocated to each Nodes
    struct Node *count = first;
    while ( count != NULL)
    {
        struct Node *tmp = count->next;
        free(count);
        count = tmp;
    }
   
    


}   
