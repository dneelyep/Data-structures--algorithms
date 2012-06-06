#include <stdio.h>

/*
Goal: Implement sequential search.

Sequential search is just a search where, to search through a list,
I request trying to find a given value A.

Starting at the first data element, if current item is A, return the
index. Else, try the next item.
*/

int main() {
  int target_data[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int i;
  int requested_item;

  for (i = 0; i <= 10; i++) {
    printf( "[%d]", target_data[i] );
  }
  printf("\n");

  printf("Enter the item ya want: ");
  scanf( "%d", &requested_item );

  printf("Here's what ya asked for: %d\n", requested_item);

  for (i = 0; i <= 10; i++) {
    if ( target_data[i] == requested_item ) {
      printf( "Yer item's at index %d\n\n", i );
    }
    printf( "[%d]\n", target_data[i] );
  }


  return 0;
}
