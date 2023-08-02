# Concatenating Strings

- The string library contains other useful functions in addition to **strlen()**
- **strcat()** takes one string **src** and appends it to the end of another string **dst**
Syntax:
```c
strcat(dst, src);
````
- Arrays are immutable but this function:
    - creates a new array of size ```strlen(src) + strlen(dst) + 1```
    - populates the array with the characters of both strings starting with ```dst```
    - discards the memory occupied by original `dst`
    - associates the `dst` string variable with the new char array
    - This is all done under the hood using **pointers**

```c
#include<stdio.h>
#include<string.h> // Don't forget to include this!
 
int main() {
  char s1[] = "abcd";
  char s2[] = "efgh";
  strcat(s1, s2);
  printf("%s", s1); 
  // Output will be "abcdefgh"
}
```
