// Creating a doubly linked list
# include <stdio.h>
# include <stdlib.h>

// Creating a new data structure for the nodes 
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    // initializing the head of the link list and pointer to show where we are in the linked list
    struct Node *head = NULL;
    int num_nodes;
    printf("Enter number of nodes you want to link: ");
    scanf("%i",&num_nodes);
    struct Node *cpt = NULL;
    // using a for loop to link the nodes and insert element into them
    for (int i = 0;i < num_nodes; i ++)
    {
        // Creating a new node
        struct Node *newnode = malloc(sizeof(struct Node));
        // getting  the user inputand inserting into the data part of the node
        int element;
        printf("Enter a number to enter into node %i: ",i + 1);
        scanf("%i",&element);
        newnode -> data  = element;

        // if this is the first node it becomes the head and pointer is set to it
        if (head == NULL)
        {
            head = newnode;
            head ->prev = NULL;
            head -> next = NULL;
            cpt = head;
        }
        else
        {
            cpt -> next = newnode;
            newnode ->prev = cpt;
            newnode -> next = NULL;
            cpt = newnode;
        
        }
        

    }
    printf("Doubly linked list created successfully");
    // Freeing up the space allocated to each nodes
    struct Node *current = head;
    while (current != NULL)
    {
        struct Node *temp = current ->next;
        free(current);
        current = temp;
    }

}