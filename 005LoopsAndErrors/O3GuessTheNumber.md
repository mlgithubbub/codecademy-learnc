# Guess the Number

**While loops** look similar to **if statements**. The difference is the while loops executes the code inside of it over and over again as long as the condition is true:

```c
while(condition){
    //Statement(s)
}
```

The while loop will be exited when the user types 8:
```c
while (guess != 8) {
  printf("Wrong guess, try again: ");
  scanf("%d", &guess);
}
```