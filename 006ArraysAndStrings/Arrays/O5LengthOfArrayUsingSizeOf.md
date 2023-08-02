# Length of Array Using sizeof()

- It's bad practive to hardcode size of array into the loop condition, because then loop is only applicable to arrays of a single size
- Use **sizeof()** to make loop valid for arrays of any size
- **sizeof()**: returns an integer that is the size of the array in bytes

Syntax:
```c
sizeof(arr);
```

Example:
```c
int main() {
  int arr[] = {3, 8, 4, 0, 9}; 
  int len = sizeof(arr); // Assign size of array to variable len
  printf("%i", len);
}
```
- The code outputs 20 because each of the 5 integers occupies 4 bytes of memory: 5 x 4 = 20
- To get actual number of elements in array, divide total size of array by the size of the data type contained
- **sizeof()** function can also be applied to any data type to determine size in memory
Syntax is same as for array:
```c
sizeof(dataType);
````
Modify len to represent number of elements in array instead of number of bytes in array:
```c
// Assign size of array to variable len. Scale by the size of an int.
int len = sizeof(arr)/sizeof(int);
````
Use this technique to work with arrays of arbitrary length:
```c
#include<stdio.h>
 
int main() {
  int arr[] = {3, 2, 10, 6, 18, 5, 8, 4, 0, 9}; 
  int len = sizeof(arr)/sizeof(int);
  for(int i = 0; i < len; i++){
    printf("%i\n", arr[i]);
  }
}
````
Further simplify code by eliminating variable len and computing the array length directly in the for loop condition:
```c
#include<stdio.h>
 
int main() {
  int arr[] = {3, 2, 10, 6, 18, 5, 8, 4, 0, 9};
  for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
    printf("%i\n", arr[i]);
  }
}
````
