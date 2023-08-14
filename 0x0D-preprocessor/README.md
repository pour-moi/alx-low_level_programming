# C Preprocessor

The C preprocessor is a separate step in the compilation process that processes the source code before it is compiled. It is a text substitution tool that instructs the compiler to perform certain actions before the actual compilation.

## Preprocessor Directives

Preprocessor directives are commands that tell the preprocessor what actions to perform. All preprocessor directives begin with a `#` symbol and must be the first non-blank character on the line. Here are some common preprocessor directives:

- `#define`: Defines a macro.
- `#include`: Includes the contents of another file into the source code.
- `#undef`: Undefines a macro.
- `#ifdef`: Includes a section of code if a certain macro is defined.
- `#ifndef`: Includes a section of code if a certain macro is not defined.
- `#if`: Tests if a compile-time condition is true.
- `#else`: Provides an alternative for `#if`.
- `#endif`: Ends a preprocessor conditional.

## Macros

Macros are pieces of code that are given a name. Whenever this name is encountered by the compiler, it is replaced with the actual piece of code. The `#define` directive is used to define a macro.

Here is an example of how to define and use a macro:

```c
#include <stdio.h>

#define LIMIT 5

int main() {
    for (int i = 0; i < LIMIT; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```
In this example, the macro LIMIT is defined as 5. Whenever the compiler encounters the word LIMIT, it replaces it with 5.

## Include Guards
Include guards are used to prevent multiple inclusions of the same header file. They are implemented using the #ifndef, #define, and #endif directives. Here is an example of how to use include guards:
```
#ifndef MY_HEADER_H
#define MY_HEADER_H

// Header file contents go here

#endif
```
In this example, the header file contents will only be included if the macro MY_HEADER_H is not already defined. This prevents multiple inclusions of the same header file.
