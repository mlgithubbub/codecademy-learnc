# Compiling

- compiler: a program that converts my code to an executable that can be run on my computer
- consists of 1. reading the code and 2. compiling it into a code the computer processor can run
- gcc (GNU Compiler Collection): widely used C compiler

Run this command to compile helloWorld.c to helloWorld executable:

```c
gcc helloWorld.c -o helloWorld
````
- gcc: how we run compiler application
- helloWorld.c fileneam of our code to be compiled
- -o helloWorld gives the executable the name helloWorld instead of a.out

Run the executable using command:
```c
./helloWorld
````
- tells the computer to look in the current directory and run helloWorld