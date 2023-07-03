# printf()

- allows for text output to the terminal

basic format:
```c
printf("string to display",[list of optional parameters])
````
- optional parameters allow you to add values dynamically into the string, such as values stored in variables:
```c
int day = 3;
printf("Hello World, today is the %drd!", day);
````
- when the compiler runs the code it will replace %d with the value in the variable list based on order

### Symbols to replace with variables:
| symbol | type |
|---|---|
|%d or %i | int |
|%f | double or float |
|%c | char |

### Symbols for invoked formatting:
| symbol | effect |
|---|---|
|\n | newline |
|\r | carriage return |
|\t | tab |


