# Else Clause

- if-else statements make binary decisions
- else code will only be executed if initial if condition is false:
```c
if (condition) {
  // Statement1 — do something
} else {
  // Statement2 — do something else
}
````
- if condition is true, statement1 is executed and statement2 is skipped
- if condition is false, statement1 is skipped and statement2 is executed

```c
if (coin == 1) {
  printf("Heads\n");
} else {
  printf("Tails\n");
}
```
- When it's ambiguous which conditional an else is attached to, it is known as a **dangling else**