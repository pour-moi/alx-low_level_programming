# C Functions: `puts`, `printf`, and `sizeof`

In this document, we will introduce three commonly used functions in the C programming language: `puts`, `printf`, and `sizeof`.

## `puts`

The `puts` function is used to write a string to the standard output (usually the screen). Its prototype is:

```c
int puts(const char *str);

The function takes a single argument, which is a pointer to the string to be written. The string must be null-terminated. The function returns a non-negative value on success, and EOF on error.

Here’s an example of using puts:

```c
#include <stdio.h>

int main(void) {
    puts("Hello, world!");
    return 0;
}
```

This program writes the string "Hello, world!" to the standard output.

## `printf`
The `printf` function is used to write formatted output to the standard output. Its prototype is:

```c
int printf(const char *format, ...);
```

The first argument is a format string that specifies how the subsequent arguments should be formatted. The format string can contain placeholders, introduced by the % character, that are replaced by the corresponding arguments. The function returns the number of characters written on success, and a negative value on error.

Here’s an example of using printf:

```c
#include <stdio.h>

int main(void) {
    int x = 42;
    printf("The answer is %d.\n", x);
    return 0;
}
```

This program writes the string "The answer is 42." to the standard output. The %d placeholder is replaced by the value of the variable x.

## `sizeof`
The sizeof operator is used to determine the size (in bytes) of an object or type. Its syntax is:

`sizeof ( expression )`
`sizeof ( type-name )`

The operator can take either an expression or a type name as its operand. It returns the size of the object or type specified by its operand.

Here’s an example of using sizeof:

```c
#include <stdio.h>

int main(void) {
    int x = 42;
    printf("The size of x is %zu bytes.\n", sizeof x);
    printf("The size of an int is %zu bytes.\n", sizeof(int));
    return 0;
}
```

This program writes the size of the variable x and the size of the int type to the standard output.

##Conclusion
In this document, we introduced three commonly used functions in C: puts, which writes a string to the standard output; printf, which writes formatted output to the standard output; and sizeof, which determines the size of an object or type. These functions are essential tools for any C programmer.
