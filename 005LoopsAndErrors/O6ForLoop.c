#include <stdio.h>

int main() {

  int i = 99;

  // Write your loop here
/*while(i>=0){
  printf("\n%i bottles of pop on the wall.\n Take one down and pass it around.\n %i bottles of pop on the wall.\n", i, i-1);
  i--;
}*/
//Convert while loop to a for loop:
for(i = 99; i >= 0; i--){
    printf("\n%i bottles of pop on the wall.\n Take one down and pass it around.\n %i bottles of pop on the wall.\n", i, i-1);
}
}