#include<stdio.h>

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];
    
  // Code for Checkpoint 1 goes here
  
  int i = 0;
  while(i < 20){
    printf("%i\n", arr[i]);
    i++;
  }
  
    /*
  for(int j = 0; j < 20; j++){
    printf("%i\n", arr[j]);
  }
  */

  // Code for Checkpoint 2 goes here
  for(int k = 0; k < 100; k++){
    arr2[k] = k + 4;
  }

  for(int p = 0; p < 100; p++){
    printf("%i\n", arr2[p]);
  }

}