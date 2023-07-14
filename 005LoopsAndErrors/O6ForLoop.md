# for Loop

- use a **for loop** instead of a **while loop** when you know how many times you want to **iterate** or **count**
```c
for (int i = 0; i < 10; i++) {
  printf("%d\n", i);
}
```

- three parts separated by two semicolons:
    - initialization of a counter: int i = 0
    - the condition: i < 10
    - the increment of the counter: i++

Does the same thing as this while loop:
```c
int i = 0;
 
while (i < 10) {
  printf("%d\n", i);
  i++;
}
```