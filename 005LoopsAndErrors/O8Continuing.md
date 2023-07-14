# Continuing

- if a **continue** is reached in a loop it will skip the rest of the statements in the loop body and continue to the next iteration

```c
for (int i = 0; i < 10; i++) {
  if (i % 2 == 0) {
    continue;
  }
  printf("%d is odd\n", i);
}
```
- if i is even, continue to the next iteration and skip the print statement below
- if i is odd, print i and continue as normal
### !!!:
- continue will always advance to the next iteration even when nested in other statements like if statements
    - same goes for other loop keywords like break
- loop keywords only interact with the most interior loop containing them