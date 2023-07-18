#include <stdio.h>

/**
 * main - first 50 fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 50;
	long long a = 0, b = 1, c;

	printf("%lld, %lld", a, b);

	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
