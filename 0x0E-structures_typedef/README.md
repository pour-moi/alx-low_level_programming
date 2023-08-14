# Structures and Typedef in C

In C, a structure is a user-defined data type that groups together variables of different data types under a single name. Structures are used to represent complex data types in a more meaningful way.

Here is an example of how to define and use a structure in C:

```c
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {0, 1};
    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
    return 0;
}
```
In this example, we define a structure named Point that has two members: x and y. We then create a variable p1 of type struct Point and initialize its members.

Typedef is a keyword in C that is used to give a new name to an existing data type. It can be used with structures to make the code more readable and to avoid having to type struct repeatedly.

Here is an example of how to use typedef with a structure:
```c
#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1 = {0, 1};
    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
    return 0;
}
```
In this example, we define a structure named Point using typedef. This allows us to use the name Point directly instead of having to write struct Point.
