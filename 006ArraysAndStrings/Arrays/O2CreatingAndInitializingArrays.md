# Creating and Initializing Arrays

- **array**: a collection of data that can be of any type

Two types of arrays can be created:
1. **initialized arrays**:
created by specifiying the initial value of its elements
```c
dataType name[] = {firstValue, secondValue, thirdValue, …};
```
This:
```c
int age[] = {7, 27, 34, 63};
```
is the same as:
```c
int age[4] = {7, 27, 34, 63};
```
2. **uninitialized arrays**: created without specifying the initial values it contains
```c
dataType name[arraySize];
```
```c
int age[4];
```
- arrays are **static** because once created, the size of an array cannot be changed