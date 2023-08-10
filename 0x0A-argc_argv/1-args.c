#include <stdio.h>

/**
 * main - prints number of command
 * @argc: number
 * @argv: array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);

	return (0);
}
