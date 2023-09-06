// Implementing a 2-dimensional array 

#include <stdio.h>

int main()
{
    // Initializing two variables for no of rows and no. of columns respectively
    int Rows = 2;
    int Columns = 3;

    // Creating a 2-dimensional array 
    int array[Rows][Columns];

    // this nested for loops iterates over the rows and columns of the 2-dimensional array 
    // then asks for the elements to add to the array at that positon

    for (int i = 0; i < Rows;i ++)
    {
        for (int j = 0;j < Columns;j ++)
        {
            // Adding elements into the 2-dimensional array
            printf("Enter numbers[%d][%d]",i,j);
            scanf("%i",&array[i][j]);
        }
    }
    
    // printing the elemnts of the array to see if the implementation was successful
    for (int i = 0;i < Rows;i ++)
    {
        for (int j = 0;j < Columns; j ++)
        {
            printf("numbers[%d][%d]: %i\n",i,j,array[i][j]);
        }
    }
}

