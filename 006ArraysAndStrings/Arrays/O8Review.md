# Review

- Arrays are a special data type that let you group many related variables; an array of 100 elements saves you the trouble of creating 100 variables in your code
- Arrays can be of any data type
- Arrays are immutable, so the number of elements must be known at creation for the program to know how much memory to save
- After creation, elements cannot be added to or deleted from arrays
- Upon creation/declaration, arrays can be initialized or uninitialized
- Create a single dimension uninitialized array like this:
```c
data_type name[array_size];
````
- Create a single dimension initialized array like this:
```c
data_type name[] = {`first_value’,‘second_value’, ‘third_value’, …};
````
- In initialized array, the size of the array is inferred from the number of elements that are supplied
- All elements of an array occupy contiguous locations in memory
- An element in an array can be accessed like this:
```c
arr[idx];
````
- Elements in an array can be modified like this: 
```c
arr[idx] = new_value;
````
- Because arrays can contain many elements, most efficient way to work with them is loops (for and while)
- Multidimensional arrays are arrays of arrays