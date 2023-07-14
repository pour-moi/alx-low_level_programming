#include <stdio.h>

/**
 *main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;
	int z = 122;

	int i;

	for ( i = a; i <= z; i++)
	{
		printf("%c", (char)i);

	}
	printf("\n");
	return (0);
}
