//Cast sourceInt to targetChar with explicit casting
//Cast sourceDouble to targetChar with implicit casting
/* #include <stdio.h>

int main() {
  
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here


  // No need to change below here
  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

} */

#include <stdio.h>

int main() {
  
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  // Cast here
  targetChar = (char)sourceInt;
  targetChar = sourceDouble;

  // No need to change below here
  printf("source int %d, source double %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}