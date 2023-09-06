// Deleting Operations on the array

#include <stdio.h>

// Creating a function that helps us print out our array 
int display(int arr[], int upperbound)
{
    printf("[");
    for (int i = 0;i <= upperbound;i ++)
    {
        printf("%i,",arr[i]);
    }
    printf("]\n");
}

int main()
{
    // 1st operation: Deleting elements from the end of an array
    
    // Initializing an array and variables to carry out the operation
    int array[5] = {1,2,3,4,5};
    int n = sizeof(array)/sizeof(array[0]);
    int lowerbound = 0;
    int upperbound = 4;

    // Displaying the array before the deletion 
    printf("Array: ");
    display(array,upperbound);
    
    // Checking to see if the array is empty
    if (n == 0)
    {
        printf("Array underflow");
        return 1;

    }
    
    // Deleting the last element in the array
    array[upperbound] = NULL;
    upperbound = upperbound - 1;

    // Displaying the array after the deletion
    printf("Array after deleting the last element: ");
    display(array,upperbound);

    // 2nd Operation: Deletion from the beginning of the array
    
    // Displaying the array before the 2nd deleting operation
    printf("Array: ");
    display(array,upperbound);
    
    // using a loop to do the deleting operation
    int k = lowerbound;
    while( k < upperbound)
    {
        array[k] = array[k + 1];
        k++;
    }
    
    array[upperbound] = NULL;
    upperbound = upperbound - 1;
    
    // Displaying the array after the deleting operation
    printf("Array after deleting the first element: ");
    display(array,upperbound);
    
}   