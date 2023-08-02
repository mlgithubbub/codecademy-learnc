# Creating and Initializing Strings

Create a string in two ways:
1. Create an initialized array of characters populated with characters from the string:
```c
char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
````
Note:
- A blank space is also a character
- \0 is the null terminating character: signifies the end of a string and must be included when creating a string as an initialized array
- The size of str[] is 12

2. Use a **string literal**
```c
char str[] = "Hello World";
````
- The null terminating character \0 is added implicitly

Print a string:
```c
char str[] = "Hello World";
printf("%s", str); // This will not print a new line
printf("%s\n", str); // This will print a new line
```
- %s for string
- Note: characters in C are case-sensitive: A vs. a are two different characters