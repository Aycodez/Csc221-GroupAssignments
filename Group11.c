// Traversing a doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

int main()
{
    // Creating an empty list
    struct Node *head = NULL;

    // Creating four Nodes and Allocating space in memory to each node
    struct Node *first =  malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));

     // Pointing the headprt(empty list) to the first node
    head = first;

    // Inserting numbers into the data part of the nodes
    first ->data = 100;
    second ->data = 200;
    third ->data = 300;
    fourth ->data = 400;

    // Linking the nodes together to create a doubly linked list
    
    first -> prev = NULL;
    first -> next = second;
    
    second -> prev = first;
    second -> next = third;
    
    third -> prev = second;
    third -> next = fourth;
    
    fourth -> prev = third;
    fourth -> next = NULL;

    // Traversing the doubly link list
    
    while ( head != NULL)
    {
        printf("%d\n",head ->data);
        head = head ->next;
    }
    
    // Freeing up the space allocoted to each node in the memory
    struct Node *count = first;
    while ( count != NULL)
    {
        struct Node *tmp = count->next;
        free(count);
        count = tmp;
    }


}