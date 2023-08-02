# Multidimensional Arrays

- **multidimensional array**: an array containing other arrays
- frequently used in mathematical applications that involve matrices and vectors
- like single dimensional arrays, they can be initialized or uninitialized upon creation/declaration
A 3 x 4 unitialized 2-dimensional array:
```c
int mat[3][4];
````
- Imagine a row of 3 lockers each containing 4 sub-lockers
A 2 x 3 initialized two-dimensional array:
```c
int mat2[][3] = {{1, 6, 3}, {5, 9, 2}};
````
- **NOTE**: The only dimension that can be emitted is the first!
In two-dimensional matrices, the first dimension represents the number of rows, and the second dimension represents the number of columns:

**mat2** Array:

|  |Column 0|Column 1| Column 2|
|---|---|---|---|
| Row 0 | 1 | 6 | 3 |
| Row 1 | 5 | 9 | 2 |

- Arrays greater than two dimensions are very rare

