// Searching operations on arrays
// We used linear search
#include <stdio.h>

int main()
{
    // Initializing an array called numbers with 5 elements
    int numbers[7] = {3,6,8,4,2,1,10};
    int len_array = 7;
    int element_to_search = 10; // the element to find/search for in the array
    // This loop iterates through the elements of the array to check if the element is in the array
    // if it is, it Returns True and prints element found
    for (int i = 0; i < len_array; i++)
    {
        if (numbers[i] == element_to_search)
        {
            printf("Element found at index %i",i);
            return 0;
        }
    }
    // if element is not in the array,it returns False and prints the element is not in the array
    printf("Element not in array! ");
    return 1;

}