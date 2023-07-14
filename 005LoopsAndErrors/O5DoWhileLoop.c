#include <stdio.h>

int main() {

  int i = 11;

  while (i < 10) {
    printf("%d\n", i);
    i++;
  }

//Convert the while loop into a do-while loop and change i from 0 to 11:
  do{
    printf("%d\n", i);
    i++;
  }while(i<10);
}
