#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
*
* @argc: unused
* @argv: array of char
*
* Return: Always 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

