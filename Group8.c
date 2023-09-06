// Traversing operations on a 2-dimensional array
#include <stdio.h>

// Initializing 2 constants for the no.of rows and no. of columns respectively

#define ROWS 2
#define COLS 3

int main()
{
    
    
    // Creating a 2 dimensional array 
    int numbers[ROWS][COLS] = { {3,2,6}, 
                          {16,78,32} };

    // This nested for loops iterates over the row one by one and the individual columns in each row
    // By so doing it walks down the 2-dimensional array untill it gets to the last column of the last row
    for (int i = 0;i < ROWS;i ++)
    {
        for (int j = 0;j < COLS; j ++)
        {
            // Displaying the element at the column in the row
            printf("numbers[%d][%d]: %i\n",i,j,numbers[i][j]);
        }
    }

    printf("Finished traversing the 2-dimensional array");
}
