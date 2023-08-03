# Recursion in C

Recursion is a programming technique where a function calls itself repeatedly until a certain condition is met. This can be useful for solving problems that can be broken down into smaller, more manageable sub-problems.

## Example

Here's an example of a recursive function in C that calculates the factorial of a given number:

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
```

This function takes an integer n as input and returns the factorial of n. The base case is when n is equal to 0, in which case the function returns 1. Otherwise, the function calls itself with n - 1 as the argument and multiplies the result by n.

## Usage
To use this function, simply include it in your C program and call it with the desired input. Make sure to include the necessary header files and to compile and run your program correctly.
