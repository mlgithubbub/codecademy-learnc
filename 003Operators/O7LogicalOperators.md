# Logical Operators

Logical operators:
| operator | meaning |
|---|---|
| !(boolean) | not true |
| && | and = both are true |
| &#124; &#124; | or = one is true |

```c
int a = 2;
int b = 3;
if (a == b && a == 2) {
  printf("both are true\n");
}
if (a == b || a == 2) {
  printf("one or both are true\n");
}
if (!(a == b)) {
  printf("they are not equal\n");
}
````
