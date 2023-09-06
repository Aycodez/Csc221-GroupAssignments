# include <stdio.h>

int main()
{
    // Merging operations on array
    // Creating two arrays which takes 4 elements each
    int arr1[4] = {1, 3, 5, 7};
    int len_arr1 = 4;
    int arr2[4] = {2, 4, 6, 8};
    int len_arr2 = 4;
    int len_merged_array = len_arr1 + len_arr2;

    // Creating an array called merged which will contain all the elements of both arrays
    int merged[len_merged_array];
    int i,j,k = 0;

    // using a loop to merge both arrays in a sorted manner
    
    while (i < len_arr1 && j < len_arr2)
    {
        if (arr1[i] > arr2[j])
        {
            merged[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            merged[k] = arr1[i];
            i ++;
            k ++;
        }

    }
    
    while (i < len_arr1)
    {
        merged[k] = arr1[i];
        k ++;
        i ++;
    }
    
    while (j < len_arr2)
    {
        merged[k] = arr2[j];
        k ++;
        j ++;
    }
    // then we print out the merged array and see if it contains all the elements of both araays
    printf("Merged array: [");
    for (int element = 0;element < len_merged_array;element ++)
    {
        printf("%i,",merged[element]);
    }
    printf("]");
    
}