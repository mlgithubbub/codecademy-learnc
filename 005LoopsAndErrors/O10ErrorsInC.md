# Errors in C

1. **compile-time errors**: errors found by the compiler
    1. **syntax errors**: an invalid statement is written:
    ```c
    int x = 6    // Error: missing a terminating semicolon
    Int x = 6;   // Error: Int is not a type
    printf(“Error”;   // Error: missing closing parenthesis
    ```
    2. **semantic errors**: statements are syntactically valid but don't do what programmer intends
    ```c
    a + b = c;   // Error: value required as left operand of assignment
 
    int i;
    i = i + 2;   // Error: use of a un-initialized variable
    ```
2. **link-time errors**/**linker errors**: errors found by the linker when trying to combine object files into an executable program
    - occur when attempt is made to compile
    - appear when missing proper prototypes, has incorrect header files or accidentally uses Main() instead of main()
3. **run-time errors**: errors found by checks in a running program
    - if  program has no compile-time errors and no link-time errors, then it runs
    - one of most common is dvision by zero
    - can be difficult to find owing to being syntactically correct and missed by compiler
4. **logic errors**: errors found by the programmer looking for the cause of erroneous results
    - sometimes no output is produced or the output is wrong


### The programming process:

code/debug --> save --> compile

