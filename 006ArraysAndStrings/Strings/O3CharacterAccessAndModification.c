#include <stdio.h>

int main() {
  char p[] = "procezzor";
  // Checkpoint 1 code goes here
  printf("%c\n", p[2]);
  // Checkpoint 2 code goes here
  p[5] = 's';
  p[6] = 's';
  printf("%s", p);
}