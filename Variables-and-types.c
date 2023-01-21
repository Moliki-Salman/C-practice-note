/* - A char takes in a 1 bytes of integers value.
    - int takes at least 2 bytes of integers value.
    - short takes at least 2 bytes of integers value.
    - long takes at least 4 bytes of integers value.

-floating points types can be represented with much largerset of values than integer can.
we represnt numbers as decimal bumbers times power of 10
To determine the size  of the type in a computer:

#include <stdio.h>

int main(void) {
  printf("char size: %lu bytes\n", sizeof(char));
  printf("int size: %lu bytes\n", sizeof(int));
  printf("short size: %lu bytes\n", sizeof(short));
  printf("long size: %lu bytes\n", sizeof(long));
  printf("float size: %lu bytes\n", sizeof(float));
  printf("double size: %lu bytes\n",
    sizeof(double));
  printf("long double size: %lu bytes\n",
    sizeof(long double));
}
*/