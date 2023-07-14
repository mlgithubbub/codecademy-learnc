#include <stdio.h>

int main() {

  int learning = 1;
  int cont;

  while (learning++ < 10) {

    printf("Congratulations! Are you ready to continue learning in the next lesson?\n");
    printf("1 - Yes\t2 - No\n");

    scanf("%d", &cont);

    if (cont == 1) {

      printf("Awesome! Let's break out and move forward!\n");
      break;

    } else {

      printf("Okay! Keep practicing! And remember to take breaks!\n");

    }

  }

}