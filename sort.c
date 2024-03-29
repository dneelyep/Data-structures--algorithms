#include <stdio.h>

/* Testing a sort algorithm.

   Basic idea is: Given a list of values,

     while there are items not ordered:
         if current value < next value, move on.
	 else
	   swap them.

	   [][][][][][][][][][][][] */

int main() {
  int my_unsorted_array[] = {1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13, 1, 3, 4, 6, 2, 23, 2, 52, 13, 1, 3, 14, 62, 2, 233, 2, 524, 131, 3, 42, 62, 21, 23, 12, 52, 131, 33, 4, 6, 2, 23, 2, 52, 13};

  int i = 0;
  int temp_holder = 0;
  int number_of_conflicts = 1;

  // Un-sorted.
  //  printf("Un-sorted array:\n");
  //  for (i = 0; i < 600; i++) {
  //    printf( "%d, ", my_unsorted_array[i] );
  //  }
  //  printf("\n");


  while (number_of_conflicts > 0) {
    number_of_conflicts = 0;

    for (i = 0; i < 600; i++) {
      if (i != 599) {
	if (my_unsorted_array[i] > my_unsorted_array[i + 1]) {
	  temp_holder = my_unsorted_array[i];
	  my_unsorted_array[i] = my_unsorted_array[i+1]; 
	  my_unsorted_array[i + 1] = temp_holder;
	  number_of_conflicts++;
	}
      }
    }
  }
  printf("Sorted array:\n");
  for (i = 0; i < 600; i++) {
    printf( "%d, ", my_unsorted_array[i] );
  }
  printf("\n");
}

