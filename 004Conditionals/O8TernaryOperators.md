# Ternary Operators

- is most applicably used when an if-else statement returns a value, but can also be used when it doesn't

```c
condition? do something : do something else;
````
Returns a value:
```c
min = a < b ? a : b;
````
Doesn't return a value:
```c
  a < b ? printf("%d\n", a) : printf("%d\n", b);
```