# Copying Strings

- **strcpy()**: copies a string/character array into and empty string/character array
Syntax:
```c
strcpy(dst,src);
````
- **Important**: the size of the empty string `dst` must be >= the length of string `src` plus 1 for the null terminating character `\0``
  - if `dst` is too short the program will exhibit undefined behavior

```c
#include<stdio.h>
#include<string.h>
 
int main() {    
  char s1[] = "ABCD";
  char s2[5]; // Empty string of five characters
  strcpy(s2, s1);    
  printf("%s", s2); // Prints: ABCD
}
```