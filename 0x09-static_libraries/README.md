# My Static Library

This is a C static library that contains useful functions for manipulating strings and arrays.

## Contents

- `my_strlen`: Returns the length of a string.
- `my_strcpy`: Copies a string from one location to another.
- `my_strcmp`: Compares two strings.
- ...

## Compilation

To compile the library, run the following command:

`gcc -c *.c ar -rc libmy.a *.o`

This will create a static library called `libmy.a`.

## Usage

To use the library in your program, include the header file `mylib.h` and link with the static library using the `-l` flag:

`gcc main.c -L. -lmy -o myprogram`


This will compile `main.c` and link it with the `libmy.a` library to create an executable called `myprogram`.