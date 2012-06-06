#include <stdio.h>

/*
Goal: Implement binary search.

In binary search, the list must already be sorted.
Chop the list in half, and determine which side of the
list the requested item is on [left or right]. Repeat
until ya find the item.


Pseudo-code:
3
1 2 3 4 *5* 6 7 8 9 10


function(list) {
  Get size of list. Divide that size in half to get the next desired index.

  if value_at_index < desired_value:
    chop list into right half.
    function(list)
  else if value_at_index > desired_value:
    chop list into left half.
    function(list)
  else:
    return current value
}
*/

int get_index(list) {
  int list_size = size_of_list / 2;
  Get size of list. Divide that size in half to get the next desired index.

  if array[list_size] < desired_value:
  int new_list[];
    chop list into right half.
    function(list)
  else if array[list_size] > desired_value:
    chop list into left half.
    function(list)
  else:
    return current value
}


int size_of_list( int array[] );
int find_item( int request, int array[] );

int target_data[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

int main() {
  int request;
  printf("%d\n", size_of_list(target_data) );
  printf("Enter what ya want: ");
  scanf("%d", &request);

  find_item(request, target_data);

    /*  
  if (   item at (size_of_list / 2) > requested_item ) {
    search on left side of list
  }
  else if ( item at (size_of_list / 2) < requested_item ) {
    search on right side of list
  }
  else {
    return/print value of item at current index, and its index.
  }
  */

  return 0;
}


int size_of_list( int array[] ) {
  return (sizeof( target_data ) / sizeof( *target_data ));
}

int find_item( int request, int array[] ) {
  int k = size_of_list( array ) / 2; /* Store half the array size. */

  if ( target_data[ (size_of_list(target_data) / 2) ] > request ) {
    while ( k <= size_of_list( array ) ) { /* Shorten the array to half its original size. */
      array[k] = 0;
    }

    printf("Search on the left.");
  }
  else if ( target_data[ (size_of_list(target_data) / 2) ] > request ) {
    printf("Search on the right.");
  }
  else { /* TODO: Detect the case where the request is out of bounds of the array. */
    printf("Index: value_at_index."); /* Return it? */
  }
}
