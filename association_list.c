/*
So, association lists.

From what I understand, an association list is a linked list, where every element
of the linked list is a key that has a corresponding value.

Here's a diagram of how I could achieve this idea:

|---------------|
|               |
|     Key       |
|               |
|---------------|
|Prev|Value|Next|
|---------------|

Key refers to the key of the this element.

Prev, Value, and Next are all pointers.
Prev and Next point to the previous and next items in the linked list.
Value points to the value associated with the element's key.


Here's an example where the association list is a mapping of 4 dog names to each
dog's respective breed.


|---------------|          |---------------|          |---------------|          |---------------|
|               |          |               |          |               |          |               |
|    "Spot"     |          |     "Fido"    |          |    "Rover"    |          |    "Angel"    |
|               |          |               |          |               |          |               |
|---------------|          |---------------|          |---------------|          |---------------|     |----|
|    |   |     <------------>    |   |    <------------>    |   |    <------------>    |   |   ------->|Null|
|------|--------|          |-------|-------|          |-------|-------|          |-------|-------|     |----|
       |                           |                          |                          |
       |                           |                          |                          |
       |                           |                          |                          |
       |                           |                          |                          |
       |-------------   -----------|         -----------------|       -------------------|
                    |   |                    |                        |
            |-------|---|---|        |-------|-------|        |-------|-------|
            |       v   v   |        |       v       |        |       v       |
            |---------------|        |---------------|        |---------------|
            |    "Poodle"   |        |  "Labrador"   |        |"Border Collie"|
            |---------------|        |---------------|        |---------------|

So Spot and Fido are both Poodles, while Rove is a Labrador and Angel is a Border Collie.
The dog names are the keys, and the breeds are the values. Note that more than one key can be 
assigned to a given value in this scheme. */


// TODO: Clean this mess up.
#include <stdio.h>

void main() {
  struct list_element;

  struct value {
    char v;
  };

  struct list_element {
    char e_key;
    struct value e_value;
    struct list_element *next;
    struct list_element *prev;
    /* next = &list_element_x
       ^-- set the next pointer to the address of list_element_x */
  };

  // TODO: I use the word value too much. Is screwing things up.
  /* Declare all valid values for simplicity. */
  struct value poodle, labrador, border_collie;
  poodle.v        = 'P';
  labrador.v      = 'L';
  border_collie.v = 'B';

  struct list_element spot, fido, rover, angel;
  spot.e_key   = 's';
  spot.e_value = poodle;
  spot.next  = &fido;
  /* spot.prev  = null; */

  fido.e_key   = 'f';
  fido.e_value = poodle;
  fido.next  = &rover;
  fido.prev  = &spot;

  rover.e_key	= 'r';
  rover.e_value = labrador;
  rover.next	= &angel;
  rover.prev	= &fido;

  angel.e_key	= 'a';
  angel.e_value = border_collie;
  /* angel.next	= null; */
  angel.prev	= &rover;

  printf("Element one, key: %c\n", spot.e_key);
  printf("Element one, value: %c\n\n", spot.e_value.v);

  printf("Element two, key: %c\n", fido.e_key);
  printf("Element two, key's address: %c\n\n", fido.e_value.v);

  printf("Element three, key: %c\n", rover.e_key);
  printf("Element three, key's address: %c\n\n", rover.e_value.v);

  printf("Element four, key: %c\n", angel.e_key);
  printf("Element four, key's address: %c\n\n", angel.e_value.v);

  /* Rover's value, from Fido. */
  printf("Since Rover comes after Fido, we can get his breed by starting at Fido: %c\n", fido.next->e_value.v);

  return;
}
