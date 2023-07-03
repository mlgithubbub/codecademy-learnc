//Practice implicit and explicit casting of testScor to displayScore
/* #include <stdio.h>

int main() {
  
  double testScore = 95.7;
  int displayScore = 0;


  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);

} */

#include <stdio.h>

int main() {
  
  double testScore = 95.7;
  int displayScore = 0;

  //Explicit casting
  displayScore = (int)testScore;
  printf("Great work, you got a %d%% on your test\n", displayScore);

  //Implicit casting
  displayScore = testScore;
  printf("Great work, you got a %d%% on your test\n", displayScore);

}