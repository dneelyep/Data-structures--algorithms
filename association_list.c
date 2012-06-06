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


#include <stdio.h>

void main() {
    struct list_element {
      char key;
      char *value;
      struct list_element next;
      struct list_element prev;
      /* next = &list_element_x
	 ^-- set the next pointer to the address of list_element_x */
    };

    struct value {
      char v;
    };

    /* Declare all valid values for simplicity. */
    struct value poodle;
    struct value labrador;
    struct value border_collie;
    poodle.v        = 'P';
    labrador.v      = 'L';
    border_collie.v = 'B';

    struct list_element spot;
    struct list_element fido; // poodle
    struct list_element rover; // lab
    struct list_element angel; // border collie

    spot.key   = 's';
    spot.value = &poodle.v;
    spot.next  = &fido;
    /* spot.prev  = null; */

    fido.key   = 'f';
    fido.value = &poodle.v;
    fido.next  = &rover;
    fido.prev  = &spot;

    rover.key	= 'r';
    rover.value = &labrador.v;
    rover.next	= &angel;
    rover.prev	= &fido;

    angel.key	= 'a';
    angel.value = &border_collie.v;
    /* angel.next	= null; */
    angel.prev	= &rover;

    printf("Element one, key: %c\n", spot.key);
    printf("Element one, value: %c\n\n", *spot.value);

    printf("Element two, key: %c\n", fido.key);
    printf("Element two, key's address: %c\n\n", *fido.value);

    printf("Element three, key: %c\n", rover.key);
    printf("Element three, key's address: %c\n\n", *rover.value);

    printf("Element four, key: %c\n", angel.key);
    printf("Element four, key's address: %c\n\n", *angel.value);

    /* Rover's value, from Fido. */
    printf("Since Rover comes after Fido, we can get his breed by starting at Fido: %c\n", fido.next.value);

    return;
}
