/* #include <stdio.h>

int main() {
  
  int endingDayOfWeek = 0;
  int daysThatPass;
  int daysInWeek;



  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);
} */

//Solution:
#include <stdio.h>

int main() {
  
  int endingDayOfWeek = 0;
  int daysThatPass = 10;
  int daysInWeek = 7;

endingDayOfWeek = daysThatPass % daysInWeek;

  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);
}