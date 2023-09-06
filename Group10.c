// Traversing a singly linked list

// including libraries to use for the operations on the singly link list
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
    
    
    // Creating four Nodes that we want to link together
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    // Pointing the headprt(empty list) to the first node
    head = first;
    
    // Allocating space to each node
    first =  malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    fourth = malloc(sizeof(struct Node));

    // Inserting numbers into the data part of the nodes
    first ->data = 1;
    second ->data = 2;
    third ->data = 3;
    fourth ->data = 4;

    // Linking the nodes to each other
    first ->next = second;
    second ->next = third;
    third ->next = fourth;
    fourth ->next = NULL;

    // Traversing the singly link list
    struct Node *counter = first;
    while ( counter != NULL)
    {
        printf("%d\n",counter ->data);
        counter = counter ->next;
    }
    printf("Finished traversing the singly linked list");
    
    // Freeing up the space we allocated to each node
    struct Node *count = first;
    while ( count != NULL)
    {
        struct Node *tmp = count->next;
        free(count);
        count = tmp;
    }
   
    


}   
