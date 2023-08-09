# Command Line Arguments in C

This program demonstrates how to use command line arguments in a C program.

## What are argc and argv?

`argc` and `argv` are two parameters that are passed to the `main()` function of a C program when it is executed. `argc` stands for "argument count" and it is an integer variable that stores the number of command-line arguments passed by the user including the name of the program. `argv` stands for "argument vector" and it is an array of pointers to strings where each string is one of the command-line arguments that were passed to the program.

## How to use argc and argv

Here is an example of how to use `argc` and `argv` in a C program:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);
    printf("Arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}
```

In this example, we first print the number of arguments that were passed to the program using the argc variable. Then, we use a loop to iterate over each element in the argv array and print each argument.

## Compiling and Running the Program

To compile this program, you can use a C compiler such as gcc. Here is an example command to compile the program:

gcc -o myprogram myprogram.c

This will create an executable file called myprogram. To run the program with command line arguments, you can use the following command:

`./myprogram arg1 arg2 arg3`

This will pass three arguments (arg1, arg2, and arg3) to the program. When you run this command, you should see output similar to this:

Number of arguments: 4
Arguments:

```bash
    ./myprogram
    arg1
    arg2
    arg3
```

As you can see, the first argument is always the name of the program itself
