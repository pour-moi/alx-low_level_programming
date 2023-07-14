#include <stdio.h>

/**
 *main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97, z = 122;
	int i;

	for (i = z; i >= a; i--)
	{
		putchar(i);

	}
	putchar('\n');
	return (0);
}
