# Switch Statement

```c
switch (grade) {
  case 9:
    printf("Freshman\n");
    break;
  case 10:
    printf("Sophomore\n");
    break;
  case 11:
    printf("Junior\n");
    break;
  case 12:
    printf("Senior\n");
    break;
  default:
    printf("Invalid\n");
    break;
}
````
- **switch** keyword initiates the statement
- () contains the value that each case will compare: grade
    - must be an **integral type**: int, char, short, long, or enum
- **case** keyword checks if expression matches specified value that comes after it
- **break** keyword tells computer to exit the block and not execute anymore code in the block
- *default* statement: if none of the cases are true the default statement will run