#include <stdio.h>

int main() {

  int a = 10;
  int b = -5;

//Change the logical operator in the conditional statement from a > 0 && b > 0 to a > 0 || b > 0.
  if (a > 0 || b > 0) {
    printf("Positive\n");
  }

  //Now add another if statement that checks if both a > 0 and !(b > 0) are true and prints “Positive too” if they are.
  if(a>0 && !(b>0)){
    printf("Positive too");
  }
}