#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  // Checkpoint 1 code goes here.
  printf("%i", matrix[3][1]);

  // Checkpoint 2 code goes here.
  for(int i = 0; i < sizeof(matrix)/sizeof(matrix[0]);i++){
    for(int j = 0; j < sizeof(matrix[0])/sizeof(int); j++){
      sum = sum + matrix[i][j];
      //sum += matrix[i][j];
    }
  }
}