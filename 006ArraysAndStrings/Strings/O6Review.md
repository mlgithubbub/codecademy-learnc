# Review

- Strings are arrays of characters
- Strings have the same properties and constraints as arrays:
    - you cannot change the size
    - you cannot delete characters, only modify them
    - modify in the same way you do for arrays
    - loop through strings like arrays
- A string can be created by:
    1. Create an array of characters
    ```c
    char str[] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};
    ```
    2. Using a string literal
    ```c
    char str[] = "String";
    ````
- Create an empty string of length len:
```c
char str[len];
````
- All strings end with null terminating character `\0`
    - Add manually when creating a string using array method
    - Is automatically added when creating a string via string literal
- The length of a string is the number of characters plus one for null terminating character
- Import C library containing string functions `#include<string.h>` 
- `strlen()` returns the number of characters in the string minus the null terminator, syntax:
```c
strlen(str);
````
- `strcat()`concatenates two strings
    - Syntax:
    ```c
    strcat(dst, src);
    ````
    - creates a new string of length `strlen(src) + strlen(dst) + 1`
    - the new string is assigned to the variable holding the `dst` string
    - no third string is created
- `strcpy()` copies an existing string into a new empty string
    - the empty string must be long enough to accommodate the original string


