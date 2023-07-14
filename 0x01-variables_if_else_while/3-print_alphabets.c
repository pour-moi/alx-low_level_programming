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
	int A = 65, Z = 90;

	int i;

	for (i = a; i <= z; i++)
	{
		printf("%c", (char)i);

	}

	for (i = A; i <= Z; i++)
	{
		printf("%c", (char)i);
	}

	printf("\n");
	return (0);
}
