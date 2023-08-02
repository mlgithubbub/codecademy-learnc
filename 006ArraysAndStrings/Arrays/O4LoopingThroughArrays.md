# Looping through Arrays

With a while loop:
```c
#include<stdio.h>
 
int main() {
  int arr[] = {6, 9, 18, 37, 4, 23, 27, 16, 1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28}; // Array
  int i = 0; // Initialize index i to zero
  while(i < 20){ // while loop
    printf("%i\n", arr[i]); // Access element at index i in arr and print 
    i++; // Increment the index
  }
}
```
With a for loop:
```c
#include<stdio.h>
 
int main() {
  int arr[] = {6, 9, 18, 37, 4, 23, 27, 16, 1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28}; // Array
  for(int i = 0; i < 20; i++){ // for loop
    printf("%i\n", arr[i]); // Access element at index i in arr and print
  }
}
```