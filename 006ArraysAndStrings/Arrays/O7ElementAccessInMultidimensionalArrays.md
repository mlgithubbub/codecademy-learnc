# Element Access in Multidimensional Arrays

Access elements in multi-dimensional arrays like this:
```c
array[rowNumnber-1][columnNumber-1];
````
3 x 3 Matrix:
```c
int mat[][3] = {{19, 6, 7}, {20, 3, 17}, {16, 13, 10}};
````

To access element in second row and third column:
```c
mat[1][2];
```

 Loop through multidimensional arrays in the same way as single dimensional arrays, but with nested loops.

 In a two-dimensional array the outer loop goes through the rows and the inner loop goes through the columns:
 ```c
 int mat[3][3] = {{12, 8, 2}, {17, 19, 5}, {6, 11, 2}};
 
for(int i = 0; i < 3; i++){
  for(int j = 0; j < 3; j++){
    int num = mat[i][j];
    printf("%i\n", num);
  }
}
````

To prevent hardcodng of dimensions in a loop use the **sizeof()** function:
- rowDimension = sizeof(matrix)/sizeof(matrix[0]);
- columnDimension = sizeof(matrix[0])/sizeof(dataType);

```c
int mat[3][3] = {{12, 8, 2}, {17, 19, 5}, {6, 11, 2}};
 
int rowDimension = sizeof(mat)/sizeof(mat[0]);
int columnDimension = sizeof(mat[0])/sizeof(int);
 
for(int i = 0; i < rowDimension; i++){
  for(int j = 0; j < columnDimension; j++){
    int num = mat[i][j];
    printf("%i\n", num);
  }
}
```