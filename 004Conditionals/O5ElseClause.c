#include <stdio.h>

int main() {

  int grade1 = 59;
  int grade2 = 90;

//Add an else statement that prints “Fail\n”.
  if (grade1 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

  //Add a second if / else statement with the condition grade2 > 60 that prints “Pass\n” if true and “Fail\n” if otherwise.
  if(grade2>60){
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

}