// Inserting elements at the beginning and end of an array
# include <stdio.h>

// Creating a function that helps us print out our array 
void display(int arr[], int len_array)
{
    printf("[");
    for (int i = 0;i < len_array;i ++)
    {
        printf("%i,",arr[i]);
    }
    printf("]\n");
}

int main(void)
{
    // 1. Inserting element at the beginning of the array
    int numbers[7] = {3,6,5,4,10}; // initializing an array called numbers which takes 7 elements
    int max_elements = 7;
    int element_to_insert_at_beginning = 11; // number to insert at the begining of the array
    int upperbound = 4;
    int lowerbound  = 0;

    printf("Array: ");
    display(numbers,upperbound + 1);
    // if array is full it will output OverflowError
    if (numbers[upperbound] == numbers[max_elements - 1 ])
    {
        printf("OverflowError(The array is already full)");
        return 1;
    }
    // this loop will start iterating from the last element and counting down to the lowerbound 
    // to its index so there be room to insert an element at the begginning
    int i = upperbound;
        
    while (i >= lowerbound)
    {    
            
        numbers[i + 1] = numbers[i];
        i = i - 1;
    }
    
    // After the iteration, the element is now inserted into the array at the beginning 
    numbers[0] = element_to_insert_at_beginning;

    // 2.Inserting element at the end of the array

    upperbound = upperbound + 1;
    int element_to_insert_at_end = 19;
    if (numbers[upperbound] == numbers[max_elements -1 ])
    {
        printf("OverflowError(The array is already full)");
        return 1;
    }
    
    // if the array is not full then we insert the element after the upperbound and it now becomes the new upperbound
    upperbound = upperbound + 1;
    numbers[upperbound] = element_to_insert_at_end;
    int j = 0;
    printf("Array after inserting operation: ");
    display(numbers,max_elements);
    printf("Done inserting operations\n");

}