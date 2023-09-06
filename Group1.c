// Traversing operations on an array
# include <stdio.h>



int main(void)
{
  // Initializing an array callled numbers and assign the length of the array to the variable called len_array
  // Also setting the counter to 0 to iterate over the array
  int numbers[5] = {33,25,2,40,50};
  int len_array = 5;
  int counter = 0;
  // this loop does the iteration by going over the array one element at a time untill it gets to the last element in the array
  
  printf("Array: [");
  while(counter < len_array)
  
  {
    int current_element = numbers[counter];
    printf("%i,", current_element); // This prints the current element so we know what element we at in the arrray
    counter += 1; //moves the counter to the next element
 
  }
  printf("]\n");
  
  // After the loop is done, it stops and prints Finished
  printf("Finished transversing the array\n");
}



