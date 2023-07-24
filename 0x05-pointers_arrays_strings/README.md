# Pointers, Arrays, and Strings in C

## Pointers
A pointer is a variable that stores the memory address of another variable. Pointers are declared using the `*` symbol, and the address of a variable can be obtained using the `&` symbol.

```c
int x = 5;
int *p = &x;

Pointers can be used to indirectly access and modify the value of a variable.
```c
*p = 10; // x is now 10
```
Pointers can also point to dynamically allocated memory using the malloc function.
```c
int *p = malloc(sizeof(int));
*p = 5;
```
## Arrays
An array is a collection of elements of the same type, stored in contiguous memory locations. The elements of an array can be accessed using their index, starting from 0.
```c
int arr[5] = {1, 2, 3, 4, 5};
````
Arrays can also be passed to functions as pointers.
```c
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```
## Strings
In C, strings are represented as arrays of characters, terminated by a null character (\0). Strings can be manipulated using functions from the string.h library.
```c
char str[] = "Hello, world!";
```