#include <stdio.h>

/**
 * main - first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 50, i;
	int a = 0, b = 1, c;

	printf("%d, %d", a, b);

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
