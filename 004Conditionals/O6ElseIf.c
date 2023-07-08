#include <stdio.h>
 
int main() {
 
  double ph = 7;

  // Start the if, else if, else here:

  //Write an if statement that checks if ph is greater than 7, then print “Basic” if it is.
  //Now attach an else if statement to that if statement and have it check if ph is less than 7, then print “Acidic” if it does.
  //Add an else statement that prints “Neutral” if all conditions fail to pass.
  if(ph > 7){
    printf("Basic");
  } else if(ph < 7){
    printf("Acidic");
  } else {
    printf("Neutral");
  }


}