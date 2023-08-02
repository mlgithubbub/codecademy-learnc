# Character Access and Modification

- Because strings are arrays, you cannot add or delete characters
Remember elements in arrays are accessed like this:
```c
arr[idx];
````
Characters in strings are also accessed in this way:
```c
char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
char str2[] = "Hello World";
 
printf("%c\n", str[6]); // "%c" required to instruct printf() that it is to expect a character.
printf("%c", str2[6]);
````

Modify a character in a string:
```c
arr[idx] = newValue;
````

You cannot add or delete characters:
```c
char str[] = "Hello Yorld";
printf("%s\n", str); // This will print Hello Yorld to the screen
 
str[6] = 'W'; // Replace 'Y' with 'W'
printf("%s\n", str); // This will print Hello World to the screen
```