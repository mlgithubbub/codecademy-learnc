#include <stdio.h>

int main() {
  
  int x;
  int y;

  // x = 2 + 3 * 5; Change this line so that addition happens first:
  x = (2+3)*5;
  // y = 2 / 4 + 6; Change this line so that addition happens first
  y = 2/(4+6);

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);
}

//y is 0 because of casting to an integer!