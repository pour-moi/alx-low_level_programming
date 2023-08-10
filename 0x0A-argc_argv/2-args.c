#include <stdio.h>

/**
 * main - prints array of strings
 * @argc: argument to count
 * @argv: the array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

