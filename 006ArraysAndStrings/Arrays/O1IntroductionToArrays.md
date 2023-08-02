# Introduction to Arrays

- **array**: a grouping of variables of the same type into contiguous blocks of memory
- useful in data applications where there are many variables of the same type that are related to each other
- For example three coordinates of a point in space:
```c
int main() {
  int xCoordinate = 1;
  int yCoordinate = 2;
  int zCoordinate = 3;
}
```
- this is okay for a small number of coordinates but will become harder to manage when the number of coordinates increases
- a solution is to store coordinates in a data structure called an array:
```c
int main() {
  int coordinates[3] = {1, 2, 3};
}
```
- declares a variable of type array called coordinates and stores the values under one variable
- under the hood, the coordinates variable creates three int variables in memory which are stored continguously
- an array is like a group of lcokers where each locker stores one piece of data