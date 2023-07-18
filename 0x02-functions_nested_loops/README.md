# Functions and Nested Loops

## Functions

A function is a block of code that performs a specific task. Functions allow you to organize your code into reusable, modular units. In many programming languages, functions are defined using a special keyword, such as `def` in Python or `function` in JavaScript.

Here's an example of a simple function in C that takes two integers as arguments and returns their sum:

```c
int add(int x, int y)
{
    return x + y;
}
```

To use this function, you would call it from another part of your code and pass in the values you want to add as arguments. For example:

int result = add(3, 4); // result is now 7

## Nested Loops

A loop is a control structure that allows you to repeat a block of code multiple times. Loops can be nested inside one another, meaning that you can have a loop inside the body of another loop. This is known as a nested loop.

Nested loops are commonly used in algorithms that require iterating over multiple dimensions of data, such as matrices or multi-dimensional arrays.

Here's an example of a nested loop in C that prints out a multiplication table:

```c
for (int i = 1; i <= 10; i++)
{
    for (int j = 1; j <= 10; j++)
    {
        printf("%d ", i * j);
    }
    printf("\n");
}
```

In this example, the outer loop iterates over the rows of the multiplication table, while the inner loop iterates over the columns. The inner loop is executed once for each iteration of the outer loop, resulting in a total of 100 iterations.

When working with nested loops, it’s important to keep track of the number of iterations and the complexity of your code. Each additional level of nesting can significantly increase the number of iterations and the time it takes for your code to run.