#include <stdio.h>

int main() {
  
  int timesServerCrashed = 5;
  double losses = 500.95;

//Find total losses by multiplying losses by timesServerCrashed:
losses *= timesServerCrashed;
//Update losses to be half the amount they just were:
losses /= 2;

  printf("Total Losses: $%.2f\n", losses);
}