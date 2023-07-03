# Casting Types Continued

- converting between char and number is interesting because char stores a number representing that char in the backend: 97 for a and 65 for A
```c
int targetInt;
char sourceChar = 'a';
targetInt = (int)sourceChar;
// targetInt = 97
````
```c
int sourceInt = 65;
char targetChar;
targetChar = (char)sourceInt;
// targetChar = 'A'
```