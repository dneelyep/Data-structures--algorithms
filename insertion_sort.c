#include <stdio.h>

int main() {
  /* Goal: Implement insertion sort.

     Insertion sort takes input n. Produces a sorted list output o.
     Does this by inserting the first item into the empty list o. Then,
       insert the next item into the correct spot. Continue until the list
       is sorted. */

  int my_array[] = {1, 12, 9, 8, 7, 2, 9, 0, 8, 87, 76, 8, 898, 98, 97, 7, 324, 4, 234};
  int output_array[] = {12, 9, 8, 7, 2, 9, 0, 8, 87, 76, 8};

  int i = 0;
  int k = 0;
  int added_items = 0; // Holds the number of items currently added to the array.

  sizeof(my_array) / sizeof(int); // Gets me the number of elements in an array.

  // TODO: Set size of output array to   sizeof(my_array) / sizeof(int)

  // Walk through each item in the outer array.
  for (i = 0; i < ( sizeof(my_array) / sizeof(int) ); i++) {

      // Walk through each item in the output list.
      for (k = 0; k < ( sizeof(output_array) / sizeof(int) ); k++) {

	if (added_items == 0) { // List is empty.
	  output_array[k] = from_input;
	  added_items++;
	}

	else {



	  if k < next_item { 
	      curent_item = k;
	    }
	  else if k == next_item {
	      if k == previous_item {
		  current_item = k
		}
	      else k > previous_item {
		  current_item = k // ?
		}
	    }
	  else { // k > next_item
		  move on
	  }


	  
	  if (k == 0 && from_input < item[k]?  { // comp_item goes in the first spot.
	      //	    Shift the list to the right, insert k at array[0]
	      output_array = from_input;
	      added_items++;
	    }

	    else if ( k == ( sizeof(output_array) / sizeof(int) ) && k > array[end_of_list - 1] ? { // comp_item goes in the last spot
	    array[end_of_list] = k
	    added_items++;
	  }
	  
	  else {
	    if (comparison_item > item_x && comparison_item < item_x+1)
	      insert item into the spot in-between the two.
		
            if (comparison_item == item_x && comparison_item == item_x+1)
	      insert item into the spot in-between the two.
          }

	  printf("%d\n", output_array[k]);
	}
      }
  }

  return 0;
}

