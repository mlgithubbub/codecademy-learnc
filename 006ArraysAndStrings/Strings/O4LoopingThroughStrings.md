# Looping Through Strings

- We can loop through a string to access or modify characters:
```c
char str[] = "Hello World";
 
for(int i = 0; i < 11; i++) { 
  printf("%c", str[i]);
}
````
- Note: In loop you don't need to account for \0 null terminating character, because it is unlikely you will need to use it
## Strings of variable length
- It's not good to hardcode the length of the string into the condition statement
- To make the loop valid for strings of any length, use **strlen()** function
```c
strlen(str)
````
To use this function, include the library:
```c
#include<string.h>
```
Now:
```c
#include<stdio.h>
#include<string.h>
 
int main() {
  char str[] = "Hello World";
 
  for(int i = 0; i < strlen(str); i++) { // Using strlen instead of hard coding the string length
    printf("%c", str[i]);
  }
}
````
Note: **strlen()** does not include null terminating character