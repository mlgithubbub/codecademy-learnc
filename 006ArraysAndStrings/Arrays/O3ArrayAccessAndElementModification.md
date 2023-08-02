# Array Access and Element Modification

- arrays elements can be accessed and modified just like any other variable of the same data type
- the first element in an array has the index 0
- the last element in any array has the index arraySize - 1
- the nth element is at index n-1

To access an array element:
```c
arr[idx]
````
To modify and array element:
```c
arr[idx] = newValue
```
- elements can only be modified to the same data type
- be careful about index and don't try to access element at an index greater than arraySize-1 or less than 0, or a random value will be returned and data stored there will be corrupted causing the program to behave unpredictably

Change an element in an array and assign it to a lone variable:
```c
#include<stdio.h>
 
int main() {
    int arr[] = {3, 5, 7, 9}; // Array creation
    arr[2] = 6; // Modify the third element
    int x = arr[2]; // Assign the third element to the lone variable x
    printf("%i", x); // Print x
}
````
