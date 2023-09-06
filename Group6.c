// Sorting operations on arrays
// We used bubble sort

#include <stdio.h>

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

int main()
{
    // Initializing an array called numbers with maximum elements of 6 and an integer i which will iterate over the array
    int numbers[7] = {13,7,2,8,4,0,3};
    int len_array = 7;
    int i = 0;
    printf("Array:");
    display(numbers,len_array);
    
    
    
    // The first loop walks through each element of the list untill it gets to the last
    while (i < len_array)
    {
        // this inner/nested loop starts from the next element after i
        // it checks to see if any element is less than numbers[i] and swaps it by so doing sorting the array
        int j = i + 1;
        while (j < len_array)
        {
           if (numbers[i] > numbers[j])
           {
            int temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
           }
           j++; 
        }
        i ++;
        
        
    }
    // printing the array to see if its sorted successfully
    printf("Sorted array: ");
    display(numbers,len_array);
}