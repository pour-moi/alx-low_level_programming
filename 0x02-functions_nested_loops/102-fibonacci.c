#include <stdio.h>

/**
 * main - first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 52, i;
	long int a = 0, b = 1, c;

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		if (c == 20365011074)
		{
			printf("%d", c);
			break;
		}

		printf("%ld, ", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
